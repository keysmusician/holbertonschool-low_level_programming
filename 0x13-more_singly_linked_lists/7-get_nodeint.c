#include "lists.h"

/**
 * get_nodeint_at_index - returns pointer to node at given index
 * @head: pointer to head node of linked list
 * @index: index of desired node
 * Return: address of node at index if valid; NULL if invalid index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index--)
		head = head->next;
	return (head);
}
