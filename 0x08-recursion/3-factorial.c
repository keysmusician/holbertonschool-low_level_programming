#include "holberton.h"

/**
 * factorial - Returns the factorial
 * @n : Number
 * Return: Factorial of 'n'
 */
int factorial(int n)
{
	int factorial = 1;
	int i = 1;

	if (n < 0)
		return (-1);

	for (; i <= n; i++)
		factorial = factorial * i;

	return (factorial);
}
