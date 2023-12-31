#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_node - adds new node at beginning of linked list
* @head: first node?
* @str: string to duplicate
*
* Return: pointer to new node
*/

list_t *add_node(list_t **head, const char *str)
{
	char *s;

	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
	{
		return (NULL);
	}

	s = strdup(str);

	if (!s)
	{
		free(temp);
		return (NULL);
	}

	temp->next = *head;
	*head = temp;
	temp->str = s;
	temp->len = strlen(s);

	return (*head);
}
