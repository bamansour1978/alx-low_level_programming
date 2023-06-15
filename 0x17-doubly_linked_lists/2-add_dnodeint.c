#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: pointer of pointer dlistint
 * @n: integer of new_node
 *
 * Return: NULL or &adresse of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		*head = new_node;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	return (*head);
}
