#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function frees a list.
 * @head: a list.
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
}
