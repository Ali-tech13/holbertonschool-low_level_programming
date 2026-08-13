#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
* hash_table_print - print the hash table
* @ht: the hash table to print
*
* Return: void
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s: '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}");
}
