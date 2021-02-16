/**
 * _strlen - Returns the length of a string
 * @s : string
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/*
#include <stdio.h>

int main(void)
{
	char *str;
	int length;

	str = "Holberton is awesome!";
	length = _strlen(str);

	printf("%d\n", length);

	return (0);
}
*/
