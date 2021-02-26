#include <stdio.h>

/**
 * main - Prints the first argument passed to this program
 * which is the name of this program by default
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 0 (success) status code
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
