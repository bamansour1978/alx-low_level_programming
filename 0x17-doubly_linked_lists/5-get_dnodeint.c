#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * a dlistint_t linked list.
 *
 * @index: number or node
 * @head: pointer
 *
 * Return: index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int conter;

	dlistint_t *node_ac = head;

	for (conter = 0; node_ac && conter != index; conter++)
	{
		node_ac = node_ac->next;
	}
	if (node_ac && conter == index)
		return (node_ac);
	return (NULL);
}
