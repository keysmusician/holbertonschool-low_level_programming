/**
 * _isalpha - checks if an ascii character is an alphabetic character
 * @c: ascii char code to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	int isalpha = 0;

	if ((c >= 'a' && c <= 'z') || (c > 'A' && c < 'Z'))
		isalpha = 1;

	return (isalpha);
}
