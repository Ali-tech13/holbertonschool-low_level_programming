#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;
	hash_node_t *newNode;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);

			free(tmp->value);
			tmp->value = new_value;

			return (1);
		}

		tmp = tmp->next;
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}

	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
