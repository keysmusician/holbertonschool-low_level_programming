#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ascii
 * 10 times on separate lines
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	int count = 0;

	while (count < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		count++;
	}
}
