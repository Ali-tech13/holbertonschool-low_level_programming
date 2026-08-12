#include "hash_tables.h"
#include <stdlib.h>
/**
* hash_table_set - function that adds an element to the hash table.
* @ht:  is the hash table you want to add or update the key/value to
* @key:  is the key.
* @value: is the value associated with the key.
* Return: 1 if it succeeded, 0 otherwise
*
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *tmp;

	if (key == NULL)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (index == NULL)
	return (0);
	if (ht->array[index] == NULL)
	{
		hash_node_t *newNode = malloc(sizeof(hash_node_t));

		newNode->key = key;
		newNode->value = strdup(value);
		newNode->next = NULL;
	}
	else
	{
		hash_node_t *newNode = malloc(sizeof(hash_node_t));

		newNode->key = key;
		newNode->value = strdup(value);
		newNode->next = NULL;

		newNode->next = ht->array[index];
	}
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			char *new_value;
			new_value = strdup(value);
			if (new_value == NULL)
			return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
	}

}
