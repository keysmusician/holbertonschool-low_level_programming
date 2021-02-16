#include "holberton.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * @str : string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}



/*
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
*/
