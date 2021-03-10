#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs simple arithmetic operations
 * @argc: Number of arguments
 * @argv: List of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int (*operation)(int, int) = NULL;
	int arg1, arg2, result;

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
			exit(99);
	}
	result = operation(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
