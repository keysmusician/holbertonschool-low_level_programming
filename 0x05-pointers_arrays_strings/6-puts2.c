#include "holberton.h"

/**
 * puts2 - prints every other character in a string
 * @str : string
 * Return: void
 */
void puts2(char *str)
{
	char *end = str;

	while (*end != '\0')
	{
		end++;
	}

	while (str < end)
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
