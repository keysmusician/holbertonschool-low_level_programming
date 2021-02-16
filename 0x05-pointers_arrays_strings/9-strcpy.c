#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest : destination buffer
 * @src : source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *end = src;
	int i, len;

	while (*end != '\0')
	{
		end++;
	}

	len = end - src;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
