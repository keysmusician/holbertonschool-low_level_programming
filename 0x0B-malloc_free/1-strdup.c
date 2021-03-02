#include <stdlib.h>

/**
 * _strdup - Copies a string into dynamically allocated memory
 * @str: String to copy
 * Return: Pointer to the array, or NULL of it fails
 */
char *_strdup(char *str)
{
	char *copy;
	int i, strlen = 0;

	if (str == NULL)
		return (NULL);

/* Get string length including null byte */
	while (str[strlen++])
		continue;

	copy = malloc(strlen);

	if (copy != NULL)
	{
		for (i = 0; i < strlen; i++)
			copy[i] = str[i];
	}

	return (copy);
}
