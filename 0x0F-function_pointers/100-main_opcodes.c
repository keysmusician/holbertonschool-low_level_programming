#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints its own opcodes
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned long int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		if (i != bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	if (bytes == 0)
		printf("%02x\n", ((unsigned char *)main)[0]);
	return (0);
}
