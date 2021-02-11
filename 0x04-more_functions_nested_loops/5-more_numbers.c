#include "holberton.h"
/**
 * more_numbers - prints numbers 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
	}
}
