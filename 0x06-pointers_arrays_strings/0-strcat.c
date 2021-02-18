/**
 * _strcat - concatenates two strings
 * @dest : string to be appended to
 * @src : string to append
 * Return: concatenation of strings
 */
char *_strcat(char *dest, char *src)
{
	int dest_end = 0;
	int i = 0;

	while (dest[dest_end] != '\0')
		dest_end++;

	while (src[i] != '\0')
	{
		dest[dest_end + i] = src[i];
		i++;
	}

	dest[dest_end + i] = '\0';

	return (dest);
}
