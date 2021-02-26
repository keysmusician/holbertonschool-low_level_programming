#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 0 (success) status code
 */
int main(int argc, char *argv[])
{
	int status = 0;

	if (argc != 3)
	{
		printf("Error\n");
		status = 1;
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (status);
}
