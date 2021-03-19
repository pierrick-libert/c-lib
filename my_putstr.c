/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 11:44:42
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 11:44:45
*/

#include "main.h"

void  my_putstr(char *str)
{
  if (!str)
    return;

  while (*str)
    my_putchar(*str++);
}
