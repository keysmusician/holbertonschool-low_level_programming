#include "holberton.h"

/**
 * print_sign - Prints the sign of a number (positive or negative)
 * @n: number to check the sign of
 * Return: 1 if n is greater than zero,
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	else
	{
		_putchar('0');
		sign = 0;
	}
	return (sign);
}
