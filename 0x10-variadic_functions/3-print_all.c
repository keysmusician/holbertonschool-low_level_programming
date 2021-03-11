#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: A list of chars representing data types
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *string;
	unsigned int i = 0;

	va_start(arguments, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			string = va_arg(arguments, char *);
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0')
			printf(",");
	}
	printf("\n");
	va_end(arguments);
}
