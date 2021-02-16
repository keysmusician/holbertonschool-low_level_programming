#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by a newline to stdout
 * @str : string
 * Return: void
 */
void print_rev(char *s)
{
	char *start = s;

	while (*s != '\0')
	{
		s++;
	}
	while (s-- > start)
	{
		_putchar(*s);
	}
	_putchar('\n');
}



/*
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
*/
