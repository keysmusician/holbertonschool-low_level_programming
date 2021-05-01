#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index of a
 * doubly linked list
 * @head: head node of doubly linked list
 * @index: desired index of node to delete
 * Return: 1 on sucess -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (!head)
		return (-1);

	for (node = *head; node && index; node = node->next)
		index--;

	if (!node || index > 0)
		return (-1);

	if (!node->prev)
	{
		if (node->next)
		{
			node->next->prev = NULL;
			*head = node->next;
		}
		*head = NULL;
	}
	else if (!node->next)
	{
		node->prev->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}

	free(node);

	return(1);
}
