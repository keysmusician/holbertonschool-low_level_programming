#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head node of doubly linked list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node_i;
	size_t nodes_count = 0;

	for (node_i = h; node_i; node_i = node_i->next)
	{
		printf("%d\n", node_i->n);
		nodes_count++;
	}

	return (nodes_count);
}
