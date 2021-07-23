#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name:name to print.
 * @f: pointer variable to a function manipulating the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

