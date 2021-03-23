#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to head node of linked list
 * @idx: index of inserted node
 * @n: value of inserted node
 * Return: address of inserted node if valid; NULL if invalid index or
 * insertion failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *prev_node;

	if (!head)
		return (NULL);
	prev_node = *head;
	if (idx != 0)
	{
		idx--;
		while (prev_node && idx--)
			prev_node = prev_node->next;
		if (!prev_node)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
		new->next = *head;
	else
	{
		new->next = prev_node->next;
		prev_node->next = new;
	}
	return (new);
}
