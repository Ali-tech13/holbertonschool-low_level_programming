#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;
	while (tmp != NULL && index > 0)
	{
		tmp = tmp->next;
		index--;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;
	else
		*head = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
