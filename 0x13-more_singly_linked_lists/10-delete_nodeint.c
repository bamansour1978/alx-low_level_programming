#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: A pointer of pointer
 * @index: the index of the node that should be deleted (unsigned int)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *h_current = NULL;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
	if (!tmp || !(tmp->next))
	return (1);
	tmp = tmp->next;
	}

	h_current = tmp->next;
	tmp->next = h_current->next;
	free(h_current);

	return (1);
}
