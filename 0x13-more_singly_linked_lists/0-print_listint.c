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
	while (h != NULL)
	{
		printf("%d\n", h->n);
		Num_nodes++;
		h = h->next;
	}

	return (Num_nodes);

}
