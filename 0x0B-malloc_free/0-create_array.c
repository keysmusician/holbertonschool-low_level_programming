#include <stlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char
 * Return: Pointer to the array, or NULL of it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	int i;

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}

	return (array);
}
