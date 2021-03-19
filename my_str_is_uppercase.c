/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:24:42
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:28:56
*/

#include "main.h"

int my_str_is_uppercase(char *str)
{
  for (int i = 0; str && str[i]; i++)
    if (str[i] < 'A' || str[i] > 'Z')
      return 0;
  return 1;
}
