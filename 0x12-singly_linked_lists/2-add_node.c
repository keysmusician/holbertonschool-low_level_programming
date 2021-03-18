#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Inserts a new head node
 * @head: Pointer to current head
 * @str: String to store in the new head node
 * Return: Pointer to new head; NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	while (new->str[len])
		len++;

	new->len = len;

	new->next = *head;
	*head = new;

	return (new);
}
