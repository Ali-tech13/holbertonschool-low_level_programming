#include "lists.h"
#include <stdio.h>
/**
* *get_dnodeint_at_index - Function to return the nth node
* @head: pointer to the first node
* @index: number of node to return
*
* Return: addres of node if found - NULL otherwise
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int len = 0;
	int count = 0;
	struct dlistint_s *currnet = head;
	struct dlistint_s *tmp = NULL;

	while (currnet != NULL)
	{
		currnet = currnet->next;
		len++;
	}
	if (index >= len)
	{
		return (NULL);
	}

	currnet = head;
	while (currnet != NULL)
	{
		if (count == index)
		{
			tmp = currnet;
			return (tmp);
		}
		currnet = currnet->next;
		count++;
	}
}
