/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:31:16
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:36:39
*/

#include "main.h"

char  *my_strcat(char *dest, char *src)
{
  int i;
  int dest_len = my_strlen(dest);

  for (i = 0; src[i]; i++)
     dest[dest_len + i] = src[i];
  dest[dest_len + i] = '\0';

  return dest;
}
