#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len -  a function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: pointer
 *
 * Return: number's element in linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
