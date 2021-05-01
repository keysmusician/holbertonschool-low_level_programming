#include "lists.h"

/**
 * add_dnodeint - adds a new head node to a doubly linked list
 * @head: address of pointer to head node of a doubly linked list
 * @n: int data to store in the new node
 * Return: pointer to the new head node; NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;

	return (new);
}
