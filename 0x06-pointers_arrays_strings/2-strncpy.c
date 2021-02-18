/**
 * _strncpy - copies a string
 * @dest : pointer to copy to
 * @src : string to copy
 * @n : number of characters to copy from src
 * Return: copy of src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
