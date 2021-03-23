#include "lists.h"

/**
 * sum_listint - sums all the elements of a listint_t list
 * @head: head node of list to print
 * Return: sum of node values in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
