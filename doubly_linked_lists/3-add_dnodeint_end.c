#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*
*
*
*
*
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *newNode = malloc(sizeof(dlistint_t));
	struct dlistint_s *tmp;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
	newNode->prev = tmp;
	return (newNode);

}
