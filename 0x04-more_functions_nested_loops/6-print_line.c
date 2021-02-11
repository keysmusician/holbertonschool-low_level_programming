#include "holberton.h"

/**
 * print_line - Draws a straight line in the terminal using '_'
 * @n: Number of '_' (underscore) to draw
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
