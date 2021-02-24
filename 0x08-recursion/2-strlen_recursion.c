#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s : String to get length of
 * Return: Length of string 's'
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(++s);
		++length;
	}

	return (length);
}
