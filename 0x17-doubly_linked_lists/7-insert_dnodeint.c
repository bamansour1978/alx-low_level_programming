#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: pointer of pointer dlistint
 * @n: integer of new_node
 *
 * Return: NULL or &adresse of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - a function that adds a new node at the
 * end of a dlistint_t list.
 *
 * @head: pointer
 * @n: new_node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @h: pointer of pointer
 * @idx: unsigned integer
 * @n: integer
 *
 * Return: idx or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j = 0;
	dlistint_t *after, *new, *before;

	if (!h)
		return (NULL);
	after = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (after)
	{
		if (j == idx - 1)
			before = after;

		if (j == idx)
		{
			new->next = after;
			after->prev = new;
			before->next = new;
			new->prev = before;
			return (new);
		}
		if (j + 1 == idx && !after->next)
			return (add_dnodeint_end(h, n));
		after = after->next;
		j++;
	}
	return (NULL);
}
