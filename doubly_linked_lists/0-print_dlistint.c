#include "lists.h"

/**
* print_dlistint - print all the elements of the list
* @h: the head of the list
*
* Return: the number of elements of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
