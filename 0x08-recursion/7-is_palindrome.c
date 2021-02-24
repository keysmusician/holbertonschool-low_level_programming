/**
 * get_end - Finds the end of a string
 * @s: String
 * Return: Pointer to char before null byte at end of string
 */
char *get_end(char *s)
{
	if (*s == '\0')
		return (s);

	return (get_end(s + 1));
}


/**
 * compare - compares chars in a string from either end
 * @a: Beginning of string
 * @b: End of string
 * Return: 1 if palindrome, 0 if not
 */
int compare(char *a, char *b)
{
	if (*a == *b)
	{
		if (a >= b)
			return (1);

		return (compare(a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 * Return: 1 if the string is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	char *end = get_end(s);

	if (!*s)
		return (0);

	return (compare(s, end - 1));
}
