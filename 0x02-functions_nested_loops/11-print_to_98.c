#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 -  prints all natural numbers from n to 98.
*@i:entered integer
*Return : void.
*/
void print_to_98(int i)
{
while (i != 98)
{
if (i < 98)
{
printf("%d, ", i);
i++;
}
else if (i > 98)
{
printf("%d, ", i);
i--;
}
}
printf("%d\n", i);
}
