#include "holberton.h"
/**
*jack_bauer -  that prints every minute of the day
*
*Returns - void to whoever called the function.
*/
void jack_bauer(void)
{
int a, b;
{
for (a = 0; a < 24; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar((a / 10));
_putchar((a % 10));
_putchar(':');
_putchar((b / 10));
_putchar((b % 10));
_putchar('\n');
}
}
}
}
