#include "lists.h"

/**
 * list_len - Counts the elements of a list_t linked list
 * @h: Head node of list to print
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	if (!h)
		return (0);
	while (current)
	{
		current = current->next;
		node_count++;
	}
	return (node_count);
}
