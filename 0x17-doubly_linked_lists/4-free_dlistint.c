#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head node of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node_i, *next;

	for (node_i = head; node_i; node_i = next)
	{
		next = node_i->next;
		free(node_i);
	}
}
