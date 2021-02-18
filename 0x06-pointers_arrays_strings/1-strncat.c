/**
 * _strcat - concatenates two strings up to n chars
 * @dest : string to be appended to
 * @src : string to append
 * @n : number of characters to concatenate from src
 * Return: concatenation of strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_end = 0;
	int i = 0;
	int j = 0;

	while (dest[dest_end] != '\0')
		dest_end++;

	while (src[i] != '\0' && i < n)
	{
		dest[dest_end + i] = src[i];
		i++;
	}

	j = i;
	while (src[j] != '\0')
		j++;

	if (j <= n - 1)
		dest[dest_end + i] = '\0';

	return (dest);
}
