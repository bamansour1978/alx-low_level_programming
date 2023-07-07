#include "hash_tables.h"

/**
 * hash_table_create - Creat a hash table
 *
 * @size: Array's size
 *
 * Return: Null or pointer to hash table of new node
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *n_node = NULL;

	n_node = malloc(sizeof(hash_table_t));

	if (n_node == NULL)
		return (NULL);

	n_node->size = size;
	n_node->array = malloc(sizeof(hash_node_t **) * size);
	if (n_node->array == NULL)
	{
		free(n_node);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(n_node->array)[i] = NULL;
	return (n_node);
}
