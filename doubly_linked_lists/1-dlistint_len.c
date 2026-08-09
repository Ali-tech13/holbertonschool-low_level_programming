#include "lists.h"
#include <stdio.h>
/**
* dlistint_len - Function that return number of elements
*
* @h: pointer to the first node
*
* Return: return number of elements
**/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const struct dlistint_s *tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
