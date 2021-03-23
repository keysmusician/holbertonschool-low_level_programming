#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to head node of linked list
 * @index: index of node to delete
 * Return: 1 on sucess; 0 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = NULL;
	listint_t *node;
	unsigned int i = index;
	int once = 0;

	if (!head)
		return (-1);
	node = *head;
	prev_node = *head;
	while (node && i--)
	{
		node = node->next;
		if (once)
			prev_node = prev_node->next;
		once = 1;
	}
	if (!node)
		return (-1);
	if (index == 0)
		*head = node->next;
	else
		prev_node->next = node->next;
	free(node);
	return (1);
}
