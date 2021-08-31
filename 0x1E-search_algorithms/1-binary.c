#include "search_algos.h"

/**
 * binary_search - Search for a value in an array of integers using the
 * binary search algorithm
 * @array: Array to search
 * @size: Size of `array`
 * @value: Value to find
 * Return: The index where `value` is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, start = 0, end = size - 1;

	if (array)
		while (start <= end)
		{
			mid = (start + end) / 2;

			printf("Searching in array: ");
			for (i = start; i < end; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);

			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid - 1;
			else
				return (mid);
		}

	return (-1);
}
