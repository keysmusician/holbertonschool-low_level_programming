/**
 * _isupper - checks if an ascii character is uppercase
 * @c: ascii character value to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int isupper = 0;

	if (c >= 'A' && c <= 'Z')
		isupper = 1;

	return (isupper);
}
