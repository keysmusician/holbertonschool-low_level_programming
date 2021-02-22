#define NULL 0

/**
 * _strstr - Searches a string for the first occurance of a substring
 * @haystack : String in which to search for a substring
 * @needle : Substring to find
 * Return: Address of first match
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *found = NULL;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					found = NULL;
					break;
				}
				found = haystack + i;
			}
		}
		if (found)
			break;
	}
	return (found);
}
