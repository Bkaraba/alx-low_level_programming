#include "holberton.h"
/**
*int _islower - checks for lower case characters.
*
*Returns 1 if the character is lowercase and o if not.
*/
int _islower(int c)
{
if (c >= UC('a') && c <= UC('z'))
{
return (1);
}
return 0;
}