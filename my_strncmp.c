/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 16:20:22
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 16:21:30
*/

#include "main.h"

int   my_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0;

  for (; s1[i] && s2[i] && s1[i] == s2[i] && i < n; i++);

  return s1[i] - s2[i];
}
