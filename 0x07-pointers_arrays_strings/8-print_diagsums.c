#include <stdio.h>

/**
 * print_diagsums - Prints both diagonal sums of a square matrix
 * @a : Flattened square matrix
 * @size : Size of the square matricies
 * Return: Void;
 */
void print_diagsums(int *a, int size)
{
	int downward_sum = 0;
	int upward_sum = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		downward_sum += a[n * (size + 1)];

		upward_sum += a[(n + 1) * (size - 1)];
	}

	printf("%d, %d\n", downward_sum, upward_sum);
}
