#include "hash_tables.h"

/**
 * hash_table_set - adds an element
 * @ht:the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *node_of_key, *element;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node_of_key = ht->array[i];
	while (node_of_key)
	{
		if (strcmp(node_of_key->key, key) == 0)
		{
			free(node_of_key->value);
			node_of_key->value = strdup(value);
			if (node_of_key->value == NULL)
				return (0);
			return (1);
		}
		node_of_key = node_of_key->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (element->key == NULL  || element->value == NULL)
		return (0);
	element->next = ht->array[i];
	ht->array[i] = element;
	return (1);
}
