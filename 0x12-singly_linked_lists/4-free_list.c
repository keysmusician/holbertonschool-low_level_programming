#include "lists.h"
#include <stdlib.h> /* free() */

/**
 * free_list - Frees all nodes in a list_t linked list
 * @head: List head
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (node)
	{
		free(node->str);
		node = head->next;
		free(head);
		head = node;
	}
}
