/**
 * leet - Encodes a string into 1337
 * @s : String
 * Return: String
 */
char *leet(char *s)
{
	int li, i = 0;
	char leet[128];

/* Create leet/1337 charset by copying ASCII */
	for (; i < 128; i++)
		leet[i] = '\0' + i;

/* Overwrite ASCII chars with corresponding leet/1337 special characters */
	leet[97] = '4';  /* 'a' */
	leet[65] = '4';  /* 'A' */
	leet[101] = '3'; /* 'e' */
	leet[69] = '3';  /* 'E' */
	leet[108] = '1'; /* 'l' */
	leet[76] = '1';  /* 'L' */
	leet[111] = '0'; /* 'o' */
	leet[79] = '0';  /* 'O' */
	leet[116] = '7'; /* 't' */
	leet[84] = '7';  /* 'T' */

/* Map chars from ASCII charset to leet/1337 charset */
	for (i = 0; s[i] != '\0'; i++)
	{
		li = s[i];
		s[i] = leet[li];
	}

	return (s);
}
