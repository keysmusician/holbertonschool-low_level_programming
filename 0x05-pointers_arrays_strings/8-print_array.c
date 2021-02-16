#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @str : string
 * Return: void
 */
void print_array(int *a, int n)
{
	int m, i = 0;

	while (i < n)
	{
		m = *(a + i);
		if (i == n - 1)
			printf("%d\n", m);
		else
			printf("%d, ", m);
		i++;
	}
}
