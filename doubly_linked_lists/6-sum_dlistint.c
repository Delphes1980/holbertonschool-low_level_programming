#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data
* @head: the beginning of the list
*
* Return: the sum of all the data of the list, 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
