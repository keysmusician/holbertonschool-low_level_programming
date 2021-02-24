#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x : Base
 * @y : Exponent
 * Return: 'x' to the 'y'
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	return (x * _pow_recursion(x, --y));
}
