#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all parameters
 * @n: Number of arguments (excluding n)
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum;

	va_start(arguments, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
