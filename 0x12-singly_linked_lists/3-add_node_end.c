#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Inserts a new tail node
 * @head: Pointer to current head
 * @str: String to store in the new tail node
 * Return: Pointer to new tail; NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;
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

	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;

	return (new);
}
