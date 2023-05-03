#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: a pointer
 * @index: unsigned integer
 *
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *browse;

	if (head == NULL)
		return (NULL);

	browse = head;
	while (browse)
	{
		if (i == index)
			return (browse);
		browse = browse->next;
		i++;
	}

	return (NULL);
}
