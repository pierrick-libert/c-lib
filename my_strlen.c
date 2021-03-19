/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 12:06:24
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 12:09:51
*/

#include "main.h"

int   my_strlen(char *str)
{
  int i = 0;

  if (!str)
    return i;

  for (; str[i]; i++);

  return i;
}
