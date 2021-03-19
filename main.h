/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 11:44:42
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 11:44:45
*/

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void  my_putchar(char c);
void  my_putstr(char *str);

int   my_atoi(char *str);
int   my_strlen(char *str);

char  *my_strcpy(char *dest, char *src);
char  *my_strncpy(char *dest, char *src, unsigned int n);
char  *my_strrev(char *str);

#endif
