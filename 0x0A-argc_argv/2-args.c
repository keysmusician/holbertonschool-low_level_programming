#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 0 (success) status code
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
