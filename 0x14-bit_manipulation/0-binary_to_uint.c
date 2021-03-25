/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of binary digits
 * Return: unsigned int value of the binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (!b)
		return (0);

	for(i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = result << 1;
		result += b[i] - '0';
	}

	return (result);
}
