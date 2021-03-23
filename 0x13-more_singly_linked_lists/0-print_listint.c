#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head node of list to print
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	if (!h)
		return (0);
	while (current)
	{
		printf("%i\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
