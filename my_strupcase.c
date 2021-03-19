/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 16:26:02
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 16:35:54
*/

#include "main.h"

char  *my_strupcase(char *str)
{
  for (int i = 0; str[i]; i++)
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= ('a' - 'A');
  return str;
}
