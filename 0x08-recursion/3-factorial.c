#include "holberton.h"

/**
 * factorial - Returns the factorial
 * @n : Number
 * Return: Factorial of 'n'
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (!n)
		return (1);

	return (n * factorial(n - 1));
}
