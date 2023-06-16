#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: pointer
 *
 * Return: sum_data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;
	dlistint_t *node = head;

	while (node)
	{
		sum_data += node->n;
		node = node->next;
	}

	return (sum_data);
}
