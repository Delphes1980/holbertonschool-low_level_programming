#include "lists.h"

/**
* list_len - prints the length of the list
* @h: head of the singly linked list
*
* Return: the length of the singly linked list
*/

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
