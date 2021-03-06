#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into newly allocated memory
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to the new array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int i, total_length = 0;

	if (s1 != NULL)
	{
		while (s1[s1_length++])
			continue;
	}
	else
	{
		s1_length = 1;
		s1 = "";
	}
	if (s2 != NULL)
	{
		while (s2[s2_length++])
			continue;
	}
	else
	{
		s2_length = 1;
		s2 = "";
	}
	/* Storage for both null bytes is not required, hence -1 */
	total_length = s1_length + s2_length - 1;
	cat = malloc(total_length);
	if (cat != NULL)
	{
		for (i = 0; i < s1_length; i++)
			cat[i] = s1[i];
		for (i = 0; i < s2_length; i++)
			cat[i + s1_length - 1] = s2[i];
	}
	return (cat);
}

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Argument values
 * Return: Concatenated strings
 */
char *argstostr(int ac, char **av)
{
	int argument;
	char *cat = NULL;
	char *temp = NULL;

	if (ac < 1 || av == NULL)
		return (NULL);

	for (argument = 0; argument < ac; argument++)
	{
		temp = str_concat(temp, av[argument]);
		if (cat != NULL)
			free(cat);
		if (temp == NULL)
			return (NULL);
		cat = str_concat(temp, "\n");
		free(temp);
		if (cat == NULL)
			return (NULL);
		temp = cat;
	}

	return (cat);
}
