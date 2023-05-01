#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list
 *
 * @h: the list's elements
 *
 * Return: Numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Num_nodes;

	Num_nodes = 0;
	do {
		printf("%d\n", h->n);
		h = h->next;
		Num_nodes++;
	} while (h != NULL);

	return (Num_nodes);
}
