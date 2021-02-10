#include "holberton.h"

/**
 * print_times_table - Prints the n times table
 * @root: the root of the times table
 * Return: void
 */
void print_times_table(int root)
{	int row, col, product;
	int not_ok = root > 15 || root < 0;

	if (not_ok)
		return;
	for (row = 0; row <= root; row++)
	{
		for (col = 0; col <= root; col++)
		{	product = row * col;
			if (col > 0)
			{
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
				else if (product < 1000)
				{
					_putchar(' ');
					_putchar('0' + product / 100);
					_putchar('0' + product / 10 -
						 (product / 100) * 10);
					_putchar('0' + product % 10);
				}
			}
			else
				_putchar('0');
			if (col < root)
				_putchar(',');
		}
		_putchar('\n');
	}
}
