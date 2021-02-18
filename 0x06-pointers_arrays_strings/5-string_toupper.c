/**
 * string_toupper - reverses the content of an array of integers
 * @s : string
 * Return: void
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] < 'z')
			s[i] -= 'a'-'A';
		i++;
	}

	return (s);
}
