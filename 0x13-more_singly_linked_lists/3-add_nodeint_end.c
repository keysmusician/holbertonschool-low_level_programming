#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @h: pointer to head node of list
 * @n: value of new tail node
 * Return: address of new tail node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *node = *head;

	new_tail = malloc(sizeof(listint_t));
	if (!new_tail)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
