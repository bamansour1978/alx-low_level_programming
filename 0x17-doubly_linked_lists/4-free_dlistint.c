#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dlistint -  a function that frees a dlistint_t list.
 *
 * @head: pointer
 *
 * Return: no value to return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nav_node, *next_node;

	if (head)
	{
		nav_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(nav_node);
			nav_node = next_node;
			next_node = next_node->next;
		}
		free(nav_node);
	}
}
