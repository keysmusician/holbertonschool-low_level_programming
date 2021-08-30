#include "search_algos.h"

/**
 * linear_search - Search for a value in an array of integers using the
 * linear search algorithm
 * @array: Array to search
 * @size: Size of `array`
 * @value: Value to find
 * Return: The first index where `value` is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
