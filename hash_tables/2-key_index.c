#include "hash_tables.h"
#include <stdlib.h>
/**
* key_index - Function that gives the index of a key
* @key: key to see it's index
* @size: size of array
*
* Return: the index at which key is should be stored
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
	return (0);
	return (hash_djb2(key) % size);

}
