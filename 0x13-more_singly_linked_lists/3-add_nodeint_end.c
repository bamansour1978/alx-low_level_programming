#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the
 * end of a listint_t list.
 *
 * @head: -
 * @n: -
 *
 * Return: --
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
	{
		return (NULL);
	}

	(*new).n = n;
	(*new).next = NULL;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		(*tmp).next = new;
	}

	return (new);
}
