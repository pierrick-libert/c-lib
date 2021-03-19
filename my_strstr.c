/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 15:52:13
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 16:06:10
*/

#include "main.h"

char    *my_strstr(char *str, char *to_find)
{
  int   j = 0;

  for (int i = 0; str[i]; i++) {
    for (j = 0; to_find[j] && str[i + j] && str[i + j] == to_find[j]; j++);
    if (j && !to_find[j])
      return (str + i);
  }

  return NULL;
}
