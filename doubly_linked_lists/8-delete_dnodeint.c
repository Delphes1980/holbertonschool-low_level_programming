#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at index
* @head: beginning of the list
* @index: the index of the node that should be deleted
*
* Return: 1 if it succeeds, -1 if it fails
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);

	return (1);
}
