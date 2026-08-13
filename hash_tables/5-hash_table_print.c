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
	int first = 1;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (first == 0)
			printf(", ");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			first = 0;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
