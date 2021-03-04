#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Lowest integer
 * @max: Highest integer
 * Return: Pointer to array on success; NULL on failure
 */
int *array_range(int min, int max)
{
	int *range = NULL;
	int i;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		range[i] = min + i;

	return (range);
}
