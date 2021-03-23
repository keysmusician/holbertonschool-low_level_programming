#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: head node of list
 * Return: number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
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
