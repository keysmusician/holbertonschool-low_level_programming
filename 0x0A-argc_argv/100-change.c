#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money
 * @argc: Number of input arguments (minimum 1)
 * @argv: Array of string arguments
 * Return: 1 if a more than one argument, or no argument
 * is passed to the program, otherwise 0 (success)
 */
int main(int argc, char *argv[])
{
	int status = 0;
	int sum = 0;
	int cents, remainder;
	int quarters, dimes, nickels, tcpcs, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		status = 1;
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
		}
		else
		{
			quarters = cents / 25;
			remainder = cents - quarters * 25;

			dimes = remainder / 10;
			remainder -= dimes * 10;

			nickels = remainder / 5;
			remainder -= nickels * 5;

			tcpcs = remainder / 2;
			remainder -= tcpcs * 2;

			pennies = remainder;

			sum = quarters + dimes + nickels + tcpcs + pennies;
			printf("%d\n", sum);
		}
	}

	return (status);
}
