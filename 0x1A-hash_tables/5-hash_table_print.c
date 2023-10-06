#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash
 * Return: void func.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int first = 1;
	hash_node_t *tmp_node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp_node = ht->array[i];
			while (tmp_node != NULL)
			{
				if (!first) 
					printf(", ");
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				first = 0;
				tmp_node = tmp_node->next;
			}
		}
	}
	printf("}\n");
}
