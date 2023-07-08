#include "hash_tables.h"

/**
  * hash_table_get - A function that retrieves a value associated
  * with a key.
  *
  * @ht: A pointer that pointes a hash table.
  * @key: key.
  *
  * Return: value key, or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idex;
	hash_node_t *tmp_node;

	if (!key || !ht)
		return (NULL);

	idex = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[idex];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}
	return (NULL);
}
