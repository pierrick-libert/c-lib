/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:51:34
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 19:12:09
*/

#include "main.h"

int   my_check_base(char *base)
{
  int i = 0;

  for (; base[i]; i++) {
    for (int j = i; base[j]; j++) {
      if (base[j] == '-' || base[j] == '+' || (i != j && base[i] == base[j])) {
        return 0;
      }
    }
  }
  return ((i < 2) ? 0 : i);
}

void  my_putnbr_base(int nb, char *base)
{
  int   b;

  if ((b = my_check_base(base)))
  {
    if (nb < 0)
      my_putchar('-');
    if (nb <= -b || b <= nb)
      my_putnbr_base(((nb < 0) ? -(nb / b) : nb / b), base);
    my_putchar((nb > 0) ? base[nb % b] : base[-(nb % b)]);
  }
}
