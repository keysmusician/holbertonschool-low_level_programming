#define NULL 0

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s : String in which to search for a characters
 * @accept : Characters to search for
 * Return: Address of first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
