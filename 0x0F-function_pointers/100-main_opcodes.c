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
	int bytes, i;

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
		printf("%x ", ((unsigned char *)main)[i]);
	printf("\n");
	return (0);
}
