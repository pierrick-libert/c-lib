/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 11:52:09
* @Last Modified by:   plibert
* @Last Modified time: 2021-03-19 14:12:27
*/

#include "main.h"

void  test(int n)
{
  char  s1[13];
  char  s2[7];
  char  s3[7];

  strcpy(s1, "Hello World!");
  strcpy(s2, "Salut!");
  strcpy(s3, "Salut!");
  printf("s1 => %s\ns2 => %s\ns3 => %s\n\n", s1, s2, s3);
  printf("ft_strncpy(s2, s1, %i) => %s\n\n", n, my_strncpy(s2, s1, n));
  printf("s1 => %s\ns2 => %s\ns3 => %s\n", s1, s2, s3);
  printf("____________________________________________\n\n");
  strcpy(s1, "Hello World!");
  strcpy(s2, "Salut!");
  strcpy(s3, "Salut!");
  printf("s1 => %s\ns2 => %s\ns3 => %s\n\n", s1, s2, s3);
  printf("strncpy(s3, s1, %i) => %s\n\n", n, strncpy(s2, s1, n));
  printf("s1 => %s\ns2 => %s\ns3 => %s\n", s1, s2, s3);
}

int   main(void)
{
  test(5);
  printf("\n\n////////////////////////////////////////\n\n\n");
  test(20);
  return (0);
}
