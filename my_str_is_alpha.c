/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 17:06:47
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 17:11:26
*/

#include "main.h"

int my_str_is_alpha(char *str)
{
  for (int i = 0; str && str[i]; i++)
    if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
      return 0;
  return 1;
}
