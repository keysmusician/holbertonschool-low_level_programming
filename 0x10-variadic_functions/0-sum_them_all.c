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
	int sum = 0;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
