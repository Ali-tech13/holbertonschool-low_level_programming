#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts a new node at a given position
*
* @h: address of the head pointer
*
* @idx: index where the new node will be added
* @n: value for the new node
* Return: address of new node, or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	struct dlistint_s *tmp;
	struct dlistint_s *newNode = malloc(sizeof(dlistint_t));
	int len = 0;
	int count = 0;

	if (newNode == NULL)
	{
		return (NULL);
	}
	tmp = (*h);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (idx == 0)
	{
		add_dnodeint(h,n);
	}

	if (idx == len)
	{
		add_dnodeint_end(h,n);
	}
	if (idx > len)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	tmp = *h;

	while (idx != count)
	{
		tmp = tmp->next;
		count++;
	}
	newNode->next = tmp;
	newNode->prev = tmp->prev;
	tmp->prev->next = newNode;
	tmp->prev = newNode;
	return (newNode);

}
