/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 19:11:23
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 19:18:51
*/

#include "main.h"

int   my_check_str(char *str, char *base)
{
  int i;
  int result = 0;

  while ((i = 0) || *str++)
    while (base[i++])
      if (!*str && !base[i])
        return ((result || *(str - 1) == base[i - 1]) ? 1 : 0);
      else if (!base[i])
        result = 0;
      else if (*(str - 1) == base[i - 1])
        result = 1;
  return 0;
}

int   my_get_rank(char c, char *base)
{
  int i = 0;

  for (; base[i] != c; i++);
  return i;
}

int   my_atoi_base(char *str, char *base)
{
  int b;
  int result = 0;
  int negative;

  for (;*str == '\v' || *str == '\t' || *str == '\f'
      || *str == '\r' || *str == '\n' || *str == ' '; str++);
  if ((negative = 0) || *str == '-' || *str == '+')
    negative = ((*str++ == '-') ? 1 : 0);
  if ((b = my_check_base(base)) && my_check_str(str, base))
    while (*str++)
      result = ((b == 2 && !result) ? my_get_rank(*(str - 1), base)
      : ((result * b) + my_get_rank(*(str - 1), base)));
  return ((negative) ? -result : result);
}
