#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of array to allocate
 * @c: Character to initialize array with
 * Return: Pointer to the array, or NULL of it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (!size)
		array = NULL;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}

	return (array);
}
