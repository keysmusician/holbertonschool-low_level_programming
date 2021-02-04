#include <stdio.h>

/**
 * main - Entry point for alphabet printing function
 * Return: 0-status code
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
