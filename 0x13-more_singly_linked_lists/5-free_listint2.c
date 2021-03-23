#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to head node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head)
	{
		while (*head)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
		}
		head = NULL;
	}
}
