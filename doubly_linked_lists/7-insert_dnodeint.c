#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a node at a given position
* @h: the beginnning of the list
* @idx: the index of the given position
* @n: value given to the new node
*
* Return: the address of the new node, NULL if it fails
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
		*h = new_node;

	if (idx == 0)
	{new_node->next = current;
	current->prev = new_node;
	*h = new_node; }

	if (*h != NULL)
		(*h)->prev = new_node;

	if (idx > 0)
		for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
