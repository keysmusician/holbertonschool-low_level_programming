#include "lists.h"

/**
 * get_dnodeint_at_index - returns node by index of a doubly linked list
 * @head: head node of doubly linked list
 * @index: index of requested node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	for (node = head; node && index; node = node->next)
		index--;
	return (node);
}
