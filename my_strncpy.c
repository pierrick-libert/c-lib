/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 13:52:42
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 15:48:11
*/

#include "main.h"

char  *my_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;
  for (; i++ < n && src[i - 1] && src[i - 1] != '\0';)
    dest[i - 1] = src[i - 1];
  while (i++ < n)
    dest[i - 2] = '\0';

  return dest;
}
