#include "lists.h"

/**
 * add_dnodeint_end - adds a new tail node to a doubly linked list
 * @head: address of pointer to head node of a doubly linked list
 * @n: int data to store in the new node
 * Return: pointer to the new tail node; NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head)
	{
		for (tail = *head; tail->next; tail = tail->next)
			continue;
		tail->next = new;
		new->prev = tail;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
