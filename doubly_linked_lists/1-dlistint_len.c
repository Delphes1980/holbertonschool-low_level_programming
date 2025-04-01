#include "lists.h"

/**
* dlistint_len - finds the legnth of the list
* @h: the head of the list
*
* Return: the length of the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (h == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
