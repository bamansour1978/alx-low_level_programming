#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 *
 * @head: a pointer
 *
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int Sum_data = 0;

	while (tmp != NULL)
	{
		Sum_data += tmp->n;
		tmp = tmp->next;
	}

	return (Sum_data);
}
