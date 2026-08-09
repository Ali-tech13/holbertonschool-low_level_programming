#include "lists.h"
#include <stdio.h>
/**
* print_dlistint - Function that prints all elements
*
*@h: pointer to the first node
*
*
* Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	struct dlistint_s *tmp = h;

	while (tmp != NULL)
	{
		printf("%d/n", tmp->n);
		printf("\n");
		tmp = tmp->next;
		count++;
	}
	return (count);
}
