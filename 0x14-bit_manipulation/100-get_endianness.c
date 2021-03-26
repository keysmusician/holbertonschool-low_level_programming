#include <stdio.h>

/**
 * get_endianness - checks endianness
 * Return: 0 if big endian; 1 if little endian
 */
int get_endianness(void)
{
	int i = 0x01020304;
	int *ip = &i;

	if (*(char *)ip == 0x01)
		return (0);
	return (1);
}
