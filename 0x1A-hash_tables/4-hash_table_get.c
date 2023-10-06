#include "hash_tables.h"
/**
 * hash_table_get - returns the value of the key
 * @ht: input
 * @key: key
 * Return: value of key if exists.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ht_node = NULL;
	unsigned long int index;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ht_node = ht->array[index];
	while (ht_node != NULL)
	{
		if (strcmp(ht_node->key, key) == 0)
			return (ht_node->value);
		ht_node = ht_node->next;
	}
	return (NULL);
}
