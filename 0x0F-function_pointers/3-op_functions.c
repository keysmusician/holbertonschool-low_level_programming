/* Need descriptions */
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two ints
 * @a: Addend
 * @b: Addend
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two ints
 * @a: Minuend
 * @b: Subtrahend
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Adds two ints
 * @a: Multiplicand
 * @b: Multiplier
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two ints
 * @a: Dividend
 * @b: Divisor
 * Return: Quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulos(?) two ints
 * @a: Moduland??
 * @b: Modulus
 * Return: ???
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
