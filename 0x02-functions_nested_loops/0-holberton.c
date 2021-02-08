#include "holberton.h"

/**
 * main - Prints string using custom print function
 * Return: 0
 */
int main(void)
{
	char *text = "Holberton\n";
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(*(text + c));
	}

	return (0);
}
