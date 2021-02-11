/**
 * _isdigit - checks if an ascii character is a digit character
 * @c: ascii character value to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int isdigit = 0;

	if (c >= '0' && c <= '9')
		isdigit = 1;

	return (isdigit);
}
