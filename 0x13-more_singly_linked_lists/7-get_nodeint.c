#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t list
 * @head: the head node
 * @index: index of the node
 *
 * Return: NULL if the node doesn't exist,
 * data on the node otherwise
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	ptr = head;
	count = 0;

	if (head)
	{
		while (ptr)
		{
			if (count == index)
			{
				return (ptr);
			}

			count++;
			ptr = ptr->next;
		}
	}

	return (NULL);
}
