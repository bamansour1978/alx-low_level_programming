#include "hash_tables.h"

/**
 * hash_table_set - added an element to hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value associated with the key.
 * Return: 1 or 0
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h_idex = 0;
	char *value_ = NULL, *key_ = NULL;
	hash_node_t *n_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	n_node = malloc(sizeof(hash_node_t));
	if (!n_node)
		return (0);
	key_ = strdup(key);
	if (!key_)
	{
		free(n_node);
		return (0);
	}
	value_ = strdup(value);
	if (!value_)
	{
		free(n_node);
		free(key_);
		return (0);
	}

	n_node->key = key_;
	n_node->value = value_;
	n_node->next = NULL;
	h_idex = key_index((unsigned char *)key, ht->size);

	if (!((ht->array)[h_idex]))
		(ht->array)[h_idex] = n_node;
	else
		hash_table_update(ht, key_, value_, h_idex, n_node);
	return (1);
}

/**
 * hash_table_update - adds an element to the hash table.
 * @ht: hash table.
 * @key_: key.
 * @value_: value associated with the key.
 * @h_idex: h_idex in the hash table to insert/update the node.
 * @n_node: node to insert into hash table.
 * Return: Always 1.
 **/
int hash_table_update(hash_table_t *ht, char *key_, char *value_,
						unsigned long int h_idex, hash_node_t *n_node)
{
	hash_node_t *tmp_node = (ht->array)[h_idex];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key_) == 0)
		{
			free(key_);
			free(n_node);
			free(ht->array[h_idex]->value);
			ht->array[h_idex]->value = value_;
			return (1);
		}
		tmp_node = tmp_node->next;
	}
	tmp_node = (ht->array)[h_idex];
	n_node->next = tmp_node;
	(ht->array)[h_idex] = n_node;
	return (1);
}
