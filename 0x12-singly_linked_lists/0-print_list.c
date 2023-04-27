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

	for (; h; h = h->next, b++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (0);
}
