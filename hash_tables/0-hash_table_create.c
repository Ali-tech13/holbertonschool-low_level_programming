#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
* hash_table_create - Function to create Hash table
*
* @size: number of index in the array
* Return: return a pointer to the newly hash table - NULL otherwise
*
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
