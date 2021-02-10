#include <stdio.h>
#include "holberton.h"

/**
 * main - prints sum of multiples of 3 and 5 less than 1024
 * Return: 0
 */
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
