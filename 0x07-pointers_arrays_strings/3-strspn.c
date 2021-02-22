/**
 * _strspn - Gets the length of a prefix substring
 * @s : String in which to search for a substring
 * @accept : Characters allowed in the substring
 * Return: Length of substring (number of chars until
 * all chars in substring are found)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i; /*Index for looping over accept*/
	int match_found;

	while (s[length])
	{
		for (i = 0; accept[i]; i++)
		{
			match_found = 0;
			if (s[length] == accept[i])
			{
				match_found = 1;
				break;
			}
		}
		if (!match_found)
			break;
		length++;
	}
	return (length);
}
