#include "holberton.h"
/**
 * more_numbers - prints numbers 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			k = i;
			if (i >= 10)
			{
				_putchar('0' + i / 10);
				k = i % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
