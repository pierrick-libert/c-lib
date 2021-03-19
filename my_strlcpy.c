/*
* @Author: Pierrick Libert
* @Date:   2021-03-19 18:47:35
* @Last Modified by:   Pierrick Libert
* @Last Modified time: 2021-03-19 18:47:41
*/

#include "main.h"

unsigned int my_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int  srclen = (unsigned int)my_strlen(src);
  unsigned int  destlen = (unsigned int)my_strlen(dest);

  size -= destlen;
  dest += destlen;
  if (!size)
    return (destlen + srclen);
  while (*src++)
    if (size-- != 1 || (size++ && 0))
      *dest++ = *(src - 1);
  *dest = '\0';
  return (destlen + srclen);
}
