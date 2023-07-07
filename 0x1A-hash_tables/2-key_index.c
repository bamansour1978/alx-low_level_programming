#include "hash_tables.h"

/**
 * key_index - a function that give you the index of a key.
 *
 * @key: key of hash table
 * @size: array's size
 *
 * Return: index should sorted in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
