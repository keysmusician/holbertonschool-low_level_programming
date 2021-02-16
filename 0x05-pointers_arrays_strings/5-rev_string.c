#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s : string
 * Return: void
 */
void print_rev(char *s)
{
	char *start = s;
	char *end;
	char c;
	int len;
	char buffer = '\0';

/*find end of string*/
	while (*s != '\0')
	{
		s++;
	}
	end = s + 1;

/*compute length*/
	len = end - start;

	for (c = start; c < end; c++)
	{
		buffer = *start;

	}
	_putchar('\n');
}




int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
