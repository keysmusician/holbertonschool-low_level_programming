#include "holberton.h"

/**
 * print_triangle - Draws a triangle in the terminal using '#'
 * @size: Size triangle to draw
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
