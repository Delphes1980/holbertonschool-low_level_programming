#include "lists.h"
#include <stdlib.h>

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
		if (h->str == NULL)
		{
			exit(1);
		}

		h = h->next;
		length++;
	}

	return (length);
}
