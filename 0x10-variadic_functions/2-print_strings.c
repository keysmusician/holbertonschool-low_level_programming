#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: String to use as a separator
 * @n: Number of srtings passed
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *string;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(arguments, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
