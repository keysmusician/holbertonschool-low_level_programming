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

/*find end of string*/
	while (*end != '\0')
	{
		end++;
	}

/*find length of string*/
	len = (end - start);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2 + 1;
	}

/*print from half length to end of string*/
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
