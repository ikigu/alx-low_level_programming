#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index given
 * @head: the head node
 * @index: the index of the node to delete
 *
 * Return: 1 on success, -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *ptr, *to_delete;
	unsigned int count;

	if (!(*head))
	{
		printf("Head is null\n");
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	else
	{
		ptr = *head;
		count = 0;

		while (ptr)
		{
			printf("count: %u\n\n", count);

			if (count == (index - 1))
			{
				to_delete = ptr->next;
				ptr->next = ptr->next->next;
				free(to_delete);

				break;
			}

			count++;
			ptr = ptr->next;
		}
	}

	return (-1);
}
