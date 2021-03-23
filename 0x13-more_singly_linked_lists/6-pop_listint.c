#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to head node of linked list
 * Return: value of deleted node
 */
int pop_listint(listint_t **head)
{
	int old_head_value = 0;
	listint_t *old_head;

	if (head)
	{
		if (*head)
		{
			old_head_value = (*head)->n;
			old_head = *head;
			*head = (*head)->next;
			free(old_head);
		}
	}
	return (old_head_value);
}
