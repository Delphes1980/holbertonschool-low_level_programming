#include "lists.h"

/**
* free_list - function that frees the linked list
* @head: node to be freed
*
* Return: nothing
*/

void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
