#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a list
* @head: the beginning of the list
* @index: the index of the node
*
* Return: the index of the node or NULL if it doesn't exist
* or if index is out of bounds
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		if (current == NULL)
		{
			return (NULL);
		}

		count++;
		current = current->next;
	}

	if (index > count)
	{
		return (NULL);
	}

	return (current);
}
