#include "hash_tables.h"
#include <stdio.h>
/**
* hash_table_delete - Function that deletes a hash table
* @ht: hash table to delete
* Return: void
**/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp;
	hash_node_t *current;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			current = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = current;
		}
	}
	free(ht->array);
	free(ht);
}
