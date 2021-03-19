/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 17:12:09
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 17:12:32
*/

#include "main.h"

int my_str_is_numeric(char *str)
{
  for (int i = 0; str && str[i]; i++)
    if (str[i] < '0' || str[i] > '9')
      return 0;
  return 1;
}
