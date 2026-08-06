#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* *add_node_end - function that adds a new node at the end of a list_t list.
*
* @head:pointer to list
* @str: string to store in node
*
* Return: addres of the new node or NULL if failed
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *tmp;
unsigned int len = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

while (str[len] != '\0')
{
len++;
}

new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_node;
return (new_node);
}
