#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into newly allocated memory
 * @s1: String 1
 * @s2: String 2
 * Return: Pointer to the new array, or NULL of it fails
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
