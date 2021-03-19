/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 13:45:37
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 14:06:10
*/

#include "main.h"

char  *my_strcpy(char *dest, char *src)
{
  int i = 0;
  for (; src[i] && src[i] != '\0'; i++)
    dest[i] = src[i];
  dest[i] = '\0';

  return dest;
}
