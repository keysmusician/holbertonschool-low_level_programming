#include <stdio.h>

/**
 * main - Entry point for alphabet printing function
 * Return: 0-status code
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);

	return (0);
}
