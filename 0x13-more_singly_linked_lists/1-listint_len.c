#include "lists.h"

/**
* listint_len - returns number of elements in a listint_t list
* @h: head node of the list
*
* Return: number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int count;

	ptr = h;
	count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
