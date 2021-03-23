#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head node of linked list
 * @n: value of new node
 * Return: address of new head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
