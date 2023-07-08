#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 *
 * @ht: pointer to points a hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node;
	unsigned int idex, frst = 0;

	if (!ht)
		return;

	printf("{");
	for (idex = 0; idex < ht->size; idex++)
	{
		tmp_node = ht->array[idex];
		while (tmp_node)
		{
			if (frst == 1)
				printf(", ");
			printf("'%s': '%s'", tmp_node->key, tmp_node->value);
			tmp_node = tmp_node->next;
			frst = 1;
		}
	}
	printf("}\n");
}
