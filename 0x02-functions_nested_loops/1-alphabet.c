#include "holberton.h"
/**
*print_alphabet - prints the alphabets in lower case followed by a new line
*
*returns void to whoever calls this function.
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
