#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: pointer of pointer
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!(*head))
		return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
