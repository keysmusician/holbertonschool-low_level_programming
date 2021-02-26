#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Check if a string converts to a positive int
 * @s: String to check
 * Return: 1 if conversion is possible, 0 if a non-digit is found
 */
int is_number(char *s)
{
	int status = 1;
	int i;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
		{
			status = 0;
			break;
		}
	}
	return (status);
}

/**
 * main - Adds positive integers
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 1 if a non-digit is passed to the program,
 * otherwise 0 (success)
 */
int main(int argc, char *argv[])
{
	int status = 0;
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_number(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				status = 1;
				break;
			}
		}
		if (!status)
			printf("%d\n", sum);
	}

	return (status);
}
