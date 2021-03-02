#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument values
 * Return: Concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int argument;
	char *cat = "";

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argument = 0; argument < ac; argument++)
	{
		cat = str_concat(cat, av[argument]);
		cat = str_concat(cat, "\n");
	}

	return (cat);
}
