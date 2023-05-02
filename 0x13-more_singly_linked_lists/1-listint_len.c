#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: a pointer
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = ((h == NULL) ? 0 : (1 + listint_len(h->next)));
	return (count);

}
