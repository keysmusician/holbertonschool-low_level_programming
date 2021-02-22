#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s : String to search for character
 * @c : Character to search for in string 's'
 * Return: Pointer to first occurrence of character c in string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *found = s;

	while (*found && *found != c)
		found++;

	return (!*found && c ? NULL : found);
}
