/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 16:38:39
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 17:04:37
*/


#include "main.h"

char  *my_strcapitalize(char *str)
{
  for (int i = 0; str[i];) {
    for (;str[i] && (str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z')
        && (str[i] < 'a' || str[i] > 'z'); i++);
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i++] -= ('a' - 'A');
    for (;(str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= '0' && str[i] <= '9'); i++) {
      if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += ('a' - 'A');
    }
  }

  return str;
}
