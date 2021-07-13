#include "holberton.h"
#include <stdlib.h>
/**
*create_array - creates an array.
*@size: int.
*@c:char
*
*Return: pointer
*/

char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *ar;
  {
    ar = malloc(size * sizeof(char));
    if (ar == NULL)
      fprintf("strderr,failled to allocate memory\n")
    for (i = 0; i < size; i++)
      ar[i] = c;
  }
  return (ar);
}
  
