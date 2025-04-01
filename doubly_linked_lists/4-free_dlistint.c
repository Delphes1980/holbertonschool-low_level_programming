#include "lists.h"

/**
* free_dlistint - free memory of the list
* @head: the beginning of the list
*
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
