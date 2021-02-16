#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s : string
 * Return: void
 */
void rev_string(char *s)
{
	int index = 0;
	int length = 0;
	char buffer = '\0';

/*find length of string EXLUDING Null*/
	while (s[length + 1] != '\0')
	{
		length++;
	}

	for (index = length; index > (length - length / 2); index--)
	{
		buffer = s[index];
		s[index] = s[length - index];
		s[length - index] = buffer;
	}
}
