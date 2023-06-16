#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the
 * node at index index of a dlistint_t linked list.
 *
 * @head: pointer
 * @index: index of the node to delete.
 *
 * Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	unsigned int counter = 0;
	dlistint_t *a_node = *head;
	dlistint_t *node_delete = *head;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = node_delete->next;
		free(node_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	idx = index - 1;
	while (a_node && counter != idx)
	{
		counter++;
		a_node = a_node->next;
	}

	if (counter == idx && a_node)
	{
		node_delete = a_node->next;
		if (node_delete->next)
		node_delete->next->prev = a_node;
		a_node->next = node_delete->next;
		free(node_delete);
		return (1);
	}

	return (-1);
}
