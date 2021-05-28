#include <stdlib.h>

/**
 * _calloc - Allocates zero-initialized memory for an array
 * @nmemb: Number of members to allocate space for
 * @size: Size of each member
 * Return: Pointer to allocated memory on success; NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory = NULL;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		memory[i] = 0;

	return (memory);
}
