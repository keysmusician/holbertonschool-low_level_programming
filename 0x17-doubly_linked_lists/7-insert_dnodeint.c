#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index of a
 *  doubly linked list
 * @h: head node of doubly linked list
 * @idx: desired index to insert new node
 * @n: new node data
 * Return: node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new, *tail = NULL;

	if (!h)
		return (NULL);

	for (node = *h; node && idx; node = node->next)
	{
		idx--;
		tail = node;
	}

	if (idx > 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = node;
	if (node)
	{
		new->prev = node->prev;
		if (!node->prev)
			*h = new;
		else
			node->prev->next = new;
		node->prev = new;
	}
	else if (tail && !tail->next)
	{
		tail->next = new;
		new->prev = tail;
	}
	else
	{
		new->prev = NULL;
		*h = new;
	}
	return (new);
}
