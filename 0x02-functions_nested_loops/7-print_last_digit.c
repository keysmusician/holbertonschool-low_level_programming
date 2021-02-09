#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check the last digit of
 * Return: Value of the last digit of input
 */

int print_last_digit(int n)
{
	int last_digit = (n >= 0) ? (n % 10) : (-n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
