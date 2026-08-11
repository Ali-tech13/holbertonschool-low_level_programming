#include "lists.h"
#include <stdlib.h>
/**
* delete_dnodeint_at_index - Function that deletes the node at index (index)
*
*@head: pointer to pointer to the first node
*
*@index: number of node to delets
* Return: 1 if it succeeded - (-1) if it failed
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0;
	unsigned int count = 0;
	dlistint_t *tmp;
	dlistint_t *current;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	tmp = *head;
	current = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		len++;
	}

	if (index == 0)
	{
		*head = current->next;
		if(*head != NULL)
		(*head)->prev = NULL;
		free(current);
		return (1);

	}

	if (index == len)
	{
		current = tmp->prev;
		current->next = NULL;
		free(tmp);
		return (1);
	}

	tmp = *head;
	current = *head;
	if (index > len)
	{
		return (-1);
	}
		while (index != count)
		{
			tmp = tmp->next;
			count++;
		}

		current = tmp->prev;
		current->next = tmp->next;
		tmp->next->prev = current;
		free(tmp);
		return (1);

}
