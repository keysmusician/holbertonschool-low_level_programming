/**
 * _islower - checks if an ascii character is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int islower = 0;

	if (c >= 'a' && c <= 'z')
		islower = 1;

	return (islower);
}
