#include "holberton.h"

/**
 * print_number - Prints int n one char at a time
 * @n: Number to print
 * Return: void
 */
void print_number(int n)
{
	int digits = 1;
	int digit = 0;
	int power = 1;
	int m = n;
	int exponent = 0;

/*count the number of digits*/
	while (m / 10)
	{
		digits++;
		m = m / 10;
	}

	if (n < 0)
		_putchar('-');

/*Print each digit one at a time*/
	for (; digits > 0; digits--)
	{
		power = 1;
		for (exponent = 1; exponent < digits; exponent++)
		{
			power *= 10;
		}

		digit = (n / power) % 10;

		if (digit < 0)
			digit = -digit;

		_putchar('0' + digit);
	}
}
