#include "holberton.h"

/**
 *_strcpy - copies a string to another string.
 *@dest:string to append to
 *@src:string to append
 *
 * Return:pointer to the copied string.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
*(dest + i) = *(src + i);
*(dest+ i) = '\0';
return (dest);
}
