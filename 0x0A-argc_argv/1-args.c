#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 0 (success) status code
 */
int main(int argc, char *argv[])
{
/*
 * Do something useless with argv to suppress compiler warning
 */
	argv += 0;

	printf("%i\n", argc - 1);

	return (0);
}
