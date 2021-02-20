#include "holberton.h"

/**
 * print_number - Prints an int
 * @n : Integer
 * Return: void
 */
void print_number(int n)
{
	int negative = 1;

	if (n < 0)
	{
		_putchar('-');
		negative -= 2;
	}

	if (n / 10)
		print_number(negative * n / 10);

	_putchar(negative * n % 10 + '0');

}
