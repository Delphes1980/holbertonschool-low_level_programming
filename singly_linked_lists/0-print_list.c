#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements
* @h: head of the singly linked list
*
* Return: all the elements of the singly linked list
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
