/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @s : String
 * Return: Void
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;

	while (s[i] != '\0')
	{
		if (capitalize && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';

		capitalize = 0;

		switch (s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case';':
		case '.':
		case '!':
		case '?':
		case '\"':
		case '(':
		case ')':
		case '{':
		case '}':
			capitalize = 1;
		}
		i++;
	}

	return (s);
}
