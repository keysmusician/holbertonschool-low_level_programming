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
	char *mid;
	int len;

	while (*end != '\0')
	{
		end++;
	}

	len = (end - start);
	mid = start + len / 2;

	while (mid < end)
	{
		_putchar(*mid);
		mid++;
	}

	_putchar('\n');
}
