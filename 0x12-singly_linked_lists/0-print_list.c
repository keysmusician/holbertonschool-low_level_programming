#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Head node of list to print
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	if (!h)
		return (0);
	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
