#include "lists.h"

/**
* _strlen - function that returns the length of a string
* @s: parameter
*
* Return: Always 0
*/

int _strlen(const char *s)
{

	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
 * add_node - adds a new node
 * @head: pointer to the head of the list
 * @str: pointer to the string
 *
 * Return: the adress of the new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = _strlen(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = *head;

	*head = temp;

	return (temp);
}
