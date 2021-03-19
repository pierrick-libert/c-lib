/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 13:12:47
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 13:40:13
*/

#include "main.h"

int   my_atoi(char *str)
{
  int result = 0;
  int negative = 0;

  for (;(*str == '\v' || *str == '\t' || *str == '\f'
      || *str == '\r' || *str == '\n' || *str == ' '); str++);

  if (*str == '-' || *str == '+')
    negative = ((*str++ == '-') ? 1 : 0);

  for (; *str >= '0' && *str <= '9'; str++)
    result = ((result * 10) + (*str - '0'));

  return ((negative) ? -result : result);
}
