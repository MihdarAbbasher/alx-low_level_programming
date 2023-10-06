#include "hash_tables.h"

/**
 * key_index - return an index
 * @key: key
 * @size: is the size of the array of the hash table
 * Return: int key value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}
