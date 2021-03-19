/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 11:52:09
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 19:11:10
*/

#include "main.h"

void  test(char *n, char *b)
{
  char  n1[20];
  char  n2[20];

  strcat(strcpy(n1, "+"), n);
  strcat(strcpy(n2, "-"), n);
  printf("ft_atoi_base(%s, %s) => %i\n", n, b, my_atoi_base(n, b));
  printf("________________________________________\n\n");
  printf("ft_atoi_base(%s, %s) => %i\n", n1, b, my_atoi_base(n1, b));
  printf("________________________________________\n\n");
  printf("ft_atoi_base(%s, %s) => %i\n", n2, b, my_atoi_base(n2, b));
}

void  test1(char *n)
{
  test(n, "01");
  printf("________________________________________\n\n");
  test(n, "01234567");
  printf("________________________________________\n\n");
  test(n, "0123456789");
  printf("________________________________________\n\n");
  test(n, "0123456789ABCDEF");
}

int   main(void)
{
  test1("0");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("1");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("10");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("42");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("52");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("2A");
  printf("\n\n////////////////////////////////////////\n\n\n");
  test1("101010");
  printf("\n\n////////////////////////////////////////\n\n\n");
  return (0);
}
