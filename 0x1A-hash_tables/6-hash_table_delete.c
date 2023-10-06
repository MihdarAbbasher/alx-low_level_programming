#include "hash_tables.h"

/**
 * hash_table_delete - delete a table
 * @ht: hash
 * Return: void no return
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *tmp_node, *prev_tmp;
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
				prev_tmp = tmp_node;
				free(tmp_node->key);
				if (tmp_node->value != NULL)
					free(tmp_node->value);
				tmp_node = tmp_node->next;
				free(prev_tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
