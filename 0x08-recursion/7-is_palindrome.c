/**
 * get_end - Finds the end of a string
 * @s: String
 * Return: Pointer to end of string
 */
char *get_end(char *s)
{
	if (*s == '\0')
		return (s - 1);

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
	if (a)
	{
		if (*a == *b)
			compare(a + 1, b - 1);
		else
			return (0);
	}
	return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String
 * Return: 1 if the string is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	char *end = get_end(s);

	return (compare(s, end));
}
