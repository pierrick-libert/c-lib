/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 16:36:30
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 16:36:53
*/

#include "main.h"

char  *my_strlowcase(char *str)
{
  for (int i = 0; str[i]; i++)
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += ('a' - 'A');
  return str;
}
