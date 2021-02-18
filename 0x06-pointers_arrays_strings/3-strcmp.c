/**
 * _strcmp - compares two strings lexographically
 * @s1 : string 1
 * @s2 : string 2
 * Return: if Return value < 0 then it indicates str1 is less than str2.
 * if Return value > 0 then it indicates str2 is less than str1.
 * if Return value = 0 then it indicates str1 is equal to str2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int compare = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

	if (s1[i] > s2[i])
		compare = 15;
	else if (s1[i] < s2[i])
		compare = -15;

	return (compare);
}
