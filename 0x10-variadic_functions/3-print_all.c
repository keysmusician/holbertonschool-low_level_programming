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
	int delimit = 0;
	unsigned int i = 0;
	char f;

	if (!format)
		return;
	va_start(arguments, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			delimit = 1;
			printf("%c", va_arg(arguments, int));
			break;
		case 'i':
			delimit = 1;
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			delimit = 1;
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			delimit = 1;
			string = va_arg(arguments, char *);
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
		}
		i++;
		f = format[i];
		if (delimit && (f == 'c' || f == 'i' || f == 'f' || f == 's'))
			printf(", ");
	}
	printf("\n");
	va_end(arguments);
}
