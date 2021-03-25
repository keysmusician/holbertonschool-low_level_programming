#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: binary number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char c = (1 & n) + '0';
	static int first_call = 1;

	if (n == 0 && first_call)
	{
		_putchar('0');
		return;
	}

	first_call = 0;
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar(c);
	}
}
