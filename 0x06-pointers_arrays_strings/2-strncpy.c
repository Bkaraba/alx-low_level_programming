#include "holberton.h"
#include <string.h>

/**
 *_strncpy - copies a string.
 *@dest: pointer param.
 *@src: pointer param.
 *@n:int n.
 *
 *Return:pointer to copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
if ((dest == NULL) && (src == NULL))
return (NULL);
char *start = dest;
while (*src && n--)
{
*dest = *src;
dest++;
src++;
*dest = '\0';
}
return (start);
}