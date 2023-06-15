#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of
 * a dlistint_t list.
 * @h: pointer of dlistint
 *
 * Return: number's nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int j;

	if (h == 0)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		j++;
		h = h->next;
	}
	return (j);
}
