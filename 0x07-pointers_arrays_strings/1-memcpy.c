#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest:pointer to mem location
 *@src:pointer to source 
 *@n:number of to copy
 *
 *Return:pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
char *sptr = src;
while (n-- > 0)
*dptr++ = *sptr++;
return (dest);
}
