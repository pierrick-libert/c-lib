/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 12:13:48
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 13:06:24
*/

#include "main.h"

char  *my_strrev(char *str)
{
  int   i;
  int   j;
  char  tmp;

  i = 0;
  j = my_strlen(str);
  while (--j > i)
  {
    tmp = str[i];
    str[i++] = str[j];
    str[j] = tmp;
  }

  return (str);
}
