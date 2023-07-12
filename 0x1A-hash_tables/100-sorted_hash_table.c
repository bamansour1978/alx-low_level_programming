#include "hash_tables.h"

/**
 * shash_table_create - A function that sorted hash table.
 * @size: The array's size.
 * Return: pointer or NULL.
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int j;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t **) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (j = 0; j < size; j++)
		ht->array[j] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - A function that add an ele to the sorted hash table.
 * @ht: pointer to the sorted ht.
 * @key: key (str)
 * @value: value associated with key(str).
 * Return: 1 or 0 .
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idex = 0;
	shash_node_t *n_node = NULL, *temp_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	idex = key_index((const unsigned char *)key, ht->size);

	temp_node = (ht->array)[idex];
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (!temp_node->value)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}

	n_node = malloc(sizeof(shash_node_t));
	if (!n_node)
		return (0);
	n_node->key = strdup(key);
	if (!n_node->key)
	{
		free(n_node);
		return (0);
	}
	n_node->value = strdup(value);
	if (!n_node->value)
	{
		free(n_node->key);
		free(n_node);
		return (0);
	}
	return (shash_table_add(ht, idex, n_node));
}


int shash_table_add(shash_table_t *ht, unsigned long int index,
					shash_node_t *new_node)
{
	shash_node_t *temp_node = NULL;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (!ht->shead)
	{
		new_node->sprev = new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp_node = ht->shead;
		while (temp_node->snext && strcmp(temp_node->snext->key, new_node->key) < 0)
			temp_node = temp_node->snext;
		new_node->sprev = temp_node;
		new_node->snext = temp_node->snext;
		if (!temp_node->snext)
			ht->stail = new_node;
		else
			temp_node->snext->sprev = new_node;
		temp_node->snext = new_node;
	}
	return (1);
}

/**
  * shash_table_get - A function that retrieve a value associated key.
  * @ht: pointer.
  * @key: (key str).
  * Return: The key's value or NULL.
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idex;
	shash_node_t *temp_node;

	if (!ht || !key)
		return (NULL);

	idex = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idex];
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - A function that prints a sorted hash table.
 * @ht: pointer to the sorted ht
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		return;

	temp_node = ht->shead;
	printf("{");
	while (temp_node)
	{
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->snext;
		if (temp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints a sorted ht in reverse order.
 * @ht: pointer to the ht
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;

	if (ht == NULL)
		return;

	temp_node = ht->stail;
	printf("{");
	while (temp_node)
	{
		printf("'%s': '%s'", temp_node->key, temp_node->value);
		temp_node = temp_node->sprev;
		if (temp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a sorted ht.
 * @ht: pointer to ht.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp_node, *auxi_node;

	if (!ht)
		return;

	temp_node = ht->shead;
	while (temp_node)
	{
		auxi_node = temp_node;
		free(auxi_node->key);
		free(auxi_node->value);
		free(auxi_node);
		temp_node = temp_node->snext;
	}
	free(ht->array);
	free(ht);
}
