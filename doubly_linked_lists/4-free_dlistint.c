#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dlistint - Function to free dlistint_t
*
*
* @head: pointer to the first node
* Return - void
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
