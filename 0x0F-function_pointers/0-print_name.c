#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to a void function which requires a string
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;

	f(name);
}
