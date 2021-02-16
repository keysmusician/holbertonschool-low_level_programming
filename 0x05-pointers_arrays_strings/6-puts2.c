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

	do {
		_putchar(*str);
	} while ((str += 2) < end);

	_putchar('\n');
}
