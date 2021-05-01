#include "lists.h"

/**
 * dlistint_len - counts the nodes of a doubly linked list
 * @h: head node of doubly linked list
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node_i;
	size_t nodes_count = 0;

	for (node_i = h; node_i; node_i = node_i->next)
		nodes_count++;

	return (nodes_count);
}
