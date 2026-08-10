#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the head pointer
 * @idx: index where the new node should be added
 * @n: value for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
				     unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *newNode;
	unsigned int len = 0;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}

	if (idx > len)
		return (NULL);

	if (idx == len)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	tmp = *h;
	while (count < idx)
	{
		tmp = tmp->next;
		count++;
	}

	newNode->n = n;
	newNode->next = tmp;
	newNode->prev = tmp->prev;

	tmp->prev->next = newNode;
	tmp->prev = newNode;

	return (newNode);
}
