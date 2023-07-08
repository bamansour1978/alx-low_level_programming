#include "hash_tables.h"

/**
 * hash_table_delete - A function deletes a hash table.
 *
 * @ht: pointer to points a hash table.
 *
 * Return: no value to return
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node, *aux_n;
	unsigned int idex;

	if (!ht)
		return;

	for (idex = 0; idex < ht->size; idex++)
	{
		tmp_node = ht->array[idex];
		while (tmp_node)
		{
			aux_n = tmp_node;
			free(aux_n->key);
			free(aux_n->value);
			free(aux_n);
			tmp_node = tmp_node->next;
		}
	}
	free(ht->array);
	free(ht);
}
