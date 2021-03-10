#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Calls a function on each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
