/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:33:40
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:36:57
*/

#include "main.h"

char  *my_strncat(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  int dest_len = my_strlen(dest);

  for (i = 0; i < n && src[i]; i++)
     dest[dest_len + i] = src[i];
  dest[dest_len + i] = '\0';

  return dest;
}
