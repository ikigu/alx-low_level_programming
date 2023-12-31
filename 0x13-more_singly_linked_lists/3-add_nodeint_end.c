#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a node at end of listint_t list
* @head: the head node
* @n: the data to add
*
* Return: address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		listint_t *ptr = *head;

		while (ptr->next)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
	}

	return (new_node);
}
