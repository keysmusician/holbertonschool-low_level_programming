/**
 * _memset - fills n bytes of memory with a constant byte
 * @s : Pointer to memory area to begin writing to
 * @b : Constant byte to fill memory with
 * @n : Number of bytes to write
 * Return: Location of beginning of memory write (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
