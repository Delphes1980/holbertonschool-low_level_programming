#include "lists.h"

/**
* add_dnodeint_end - add a new node at the end of the list
* @head: the head of the list
* @n: the node to be added to the list
*
* Return: the address of the new node or NULL if it fails
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
		new_node->prev = current;
		new_node->next = NULL;
	}

	return (new_node);
}
