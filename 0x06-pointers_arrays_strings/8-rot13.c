/**
 * rot13 - Encodes a string into rot13
 * @s : String
 * Return: Rot13 string
 */
char *rot13(char *s)
{
	int x, y;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

/* Map chars from ASCII charset to ROT13 charset */
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (s[x] == alpha[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
	}
	return (s);
}
