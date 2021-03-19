/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 13:52:42
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 14:12:40
*/

#include "main.h"

char  *my_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;
  for (; src[i] && src[i] != '\0' && i < n; i++)
    dest[i] = src[i];
  dest[i] = '\0';

  return dest;
}
