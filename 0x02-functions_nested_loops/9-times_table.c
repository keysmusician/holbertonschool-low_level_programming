#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int n, m, product;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			product = n * m;

			if (m > 0)
			{
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
			}
			else
				_putchar('0');
			if (m == 9)
				continue;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
