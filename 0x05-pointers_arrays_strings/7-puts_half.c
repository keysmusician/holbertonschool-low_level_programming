#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str : string
 * Return: void
 */
void puts_half(char *str)
{
	char *end = str;
	char *start = str;
	int len, i;

/*find end of pointer*/
	while (*end != '\0')
	{
		end++;
	}

/*find length of string*/
	len = (end - start);

/*print from half length to end of string*/
	for (i = (len - 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
