#include "lists.h"
#include <stdio.h>
/**
* sum_dlistint - Function to return sum of all node data
*
* @head: pointer to first node
*
* Return: sum of nodes if list exist - 0 otherwise
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	struct dlistint_s *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
