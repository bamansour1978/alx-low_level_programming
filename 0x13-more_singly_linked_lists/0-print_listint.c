#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 *
 * @h: a pointer
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Num_nodes = 0;

	do {
		printf("%d\n", h->n);
		Num_nodes++;
		h = h->next;
	} while (h);
	return (Num_nodes);
}
