#include "lists.h"

/**
 * sum_dlistint - sums the data in nodes of a doubly linked list
 * @head: head node of doubly linked list
 * Return: sum of node data in list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node_i;
	int sum = 0;

	for (node_i = head; node_i; node_i = node_i->next)
		sum += node_i->n;

	return (sum);
}
