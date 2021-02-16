#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * @s : string
 * Return: void
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}
	while (s-- > start)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
