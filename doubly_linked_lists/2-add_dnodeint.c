#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning of the list
* @head: the head of the list
* @n: the value of the nwe node
*
* Return: the address of the new element or NULL is it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
