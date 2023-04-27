#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_list - unction that prints all the elements of a list_t list
 *
 * @h: list_t's pointer
 *
 * Return: count the nodes printed
 *
 */

size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
