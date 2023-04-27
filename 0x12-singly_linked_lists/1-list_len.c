#include <stdlib.h>
#include "lists.h"

/**
 * list_len - print number 's elements list
 *
 * @h: structure's pointer
 *
 * Return: number_element
 *
 */

size_t list_len(const list_t *h)
{
	unsigned int number_element;

	number_element = 0;
	while (h != 0)
	{
		number_element++;
		h = h->next;
	}
	return (number_element);
}
