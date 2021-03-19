/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:25:25
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:29:00
*/

#include "main.h"

int my_str_is_printable(char *str)
{
  for (int i = 0; str && str[i]; i++)
    if (str[i] < 32 || str[i] > 126)
      return 0;
  return 1;
}
