/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 16:11:40
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 16:16:19
*/

#include "main.h"

int   my_strcmp(char *s1, char *s2)
{
  int i = 0;

  for (; s1[i] && s2[i] && s1[i] == s2[i]; i++);

  return s1[i] - s2[i];
}
