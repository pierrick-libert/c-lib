/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:23:55
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:28:52
*/

#include "main.h"

int my_str_is_lowercase(char *str)
{
  for (int i = 0; str && str[i]; i++)
    if (str[i] < 'a' || str[i] > 'z')
      return 0;
  return 1;
}
