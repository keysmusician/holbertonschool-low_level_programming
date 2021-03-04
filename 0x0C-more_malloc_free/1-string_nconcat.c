#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of string 2
 * @s1: String 1
 * @s2: String 2
 * @n: Max bytes to concatenate
 * Return: Pointer to allocated memory on success; NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat = NULL;
	unsigned int i, s2_len, s1_len = 0;

	if (s1 != NULL)
	{
		while (s1[s1_len++])
			continue;
	}
	else
	{
		s1 = "";
		s1_len = 1;
	}

	if (s2 != NULL)
	{
		for (s2_len = 0; s2[s2_len] && s2_len < n; s2_len++)
			continue;
		s2_len++;
	}
	else
	{
		s2 = "";
		s2_len = 1;
	}

	cat = malloc(s1_len + s2_len - 1);
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		cat[i] = s1[i];
	for (i = 0; i < n && s2[i]; i++)
		cat[i + s1_len - 1] = s2[i];
	cat[s1_len + s2_len - 2] = '\0';

	return (cat);
}
