#include "hash_tables.h"
void insert(shash_table_t *ht, shash_node_t *ht_node);
/**
 * shash_table_create - create ordered hash table
 * @size: size
 * Return: the root of ht
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;

	if (size == 0)
		return (NULL);
	hashTable = calloc(1, sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = calloc(size, (sizeof(shash_node_t **)));
	if (hashTable->array == NULL)
		return (NULL);
	hashTable->shead = NULL;
	hashTable->stail = NULL;
	return (hashTable);
}

/**
 * shash_table_set - set a key: value
 * @ht: hash table
 * @key: key
 * @value: input
 * Return: 1 in succes, otherwie 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *ht_node, *tmp_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{	free(tmp_node->value), tmp_node->value = strdup(value);
			if (tmp_node->value == NULL)
				exit(1);
			return (1);
		} tmp_node = tmp_node->next;
	}
	index = key_index((const unsigned char *)key, ht->size);
	ht_node = malloc(sizeof(shash_node_t));
	if (ht_node == NULL)
		exit(1);
	ht_node->key = strdup(key);
	if (ht_node->key == NULL)
		exit(1);
	ht_node->value = strdup(value);
	if (ht_node->value == NULL)
		exit(1);
	ht_node->next = ht->array[index], ht_node->sprev = NULL;
	ht_node->snext = NULL, ht->array[index] = ht_node;
	if (ht->shead == NULL)
	{
		ht->shead = ht_node, ht->stail = ht_node;
		return (1);
	}
	insert(ht, ht_node);
	return (1);
}
/**
 * insert - insert a node
 * @ht: hash
 * @ht_node: node
 */
void insert(shash_table_t *ht, shash_node_t *ht_node)
{
	shash_node_t *tmp_node, *prev;

	if (strcmp(ht->shead->key, ht_node->key) > 0)
	{
		ht_node->snext = ht->shead;
		ht->shead->sprev = ht_node;
		ht->shead = ht_node;
	}
	else
	{
		tmp_node = ht->shead;
		while (tmp_node != NULL)
		{
			prev = tmp_node->sprev;
			if (strcmp(tmp_node->key, ht_node->key) > 0)
			{
				prev->snext = ht_node;
				tmp_node->sprev = ht_node;
				ht_node->snext = tmp_node;
				ht_node->sprev = prev;
				return;
			}
			prev = tmp_node;
			tmp_node = tmp_node->snext;
		}
		prev->snext = ht_node;
		ht_node->sprev = prev;
		ht->stail = ht_node;
	}
}
/**
 * shash_table_get - get
 * @ht: hash table
 * @key:  key
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *init;
	int flag = 1;

	if (ht == NULL)
		return;
	init = ht->shead;
	putchar('{');
	while (init != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", init->key, init->value);
		flag = 0;
		init = init->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print in rev
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *init;
	int flag = 1;

	if (ht == NULL)
		return;
	init = ht->stail;
	putchar('{');
	while (init != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", init->key, init->value);
		flag = 0;
		init = init->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - DEL hash table
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node, *in_tmp_node;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp_node = ht->array[i];
			while (tmp_node != NULL)
			{
				in_tmp_node = tmp_node;
				free(tmp_node->key);
				if (tmp_node->value)
					free(tmp_node->value);
				tmp_node = tmp_node->next;
				free(in_tmp_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
