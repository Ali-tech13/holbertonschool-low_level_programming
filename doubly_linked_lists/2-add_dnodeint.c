#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_dnodeint - Function to add new node at the beginning
*
* @head: pointer to pointer to the first node
* @n: data to store in node
* Return: the address of the newNode
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
