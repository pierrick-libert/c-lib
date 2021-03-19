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

void          my_putchar(char c);
void          my_putstr(char *str);
void          my_putnbr_base(int nb, char *base);

int           my_atoi(char *str);
int           my_strlen(char *str);
int           my_check_base(char *base);
int           my_str_is_alpha(char *str);
int           my_str_is_numeric(char *str);
int           my_strcmp(char *s1, char *s2);
int           my_str_is_lowercase(char *str);
int           my_str_is_uppercase(char *str);
int           my_str_is_printable(char *str);
int           my_atoi_base(char *str, char *base);
int           my_strncmp(char *s1, char *s2, unsigned int n);

unsigned int  my_strlcat(char *dest, char *src, unsigned int size);
unsigned int  my_strlcpy(char *dest, char *src, unsigned int size);

char          *my_strrev(char *str);
char          *my_strupcase(char *str);
char          *my_strlowcase(char *str);
char          *my_strcapitalize(char *str);
char          *my_strcat(char *dest, char *src);
char          *my_strcpy(char *dest, char *src);
char          *my_strstr(char *str, char *to_find);
char          *my_strncat(char *dest, char *src, unsigned int n);
char          *my_strncpy(char *dest, char *src, unsigned int n);

#endif
