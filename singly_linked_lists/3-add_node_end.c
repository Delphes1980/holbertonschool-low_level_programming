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
* *add_node_end - add a new node at the end of the list
* @head: the original linked list
* @str: the string to be added
*
* Return: the adress of the new element, NULL if it fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

			if (new_node->str == NULL)
			{
				free(new_node);
				return (NULL);
			}

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}

		else
		{
			temp = *head;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = new_node;

			return (new_node);
		}
	}

	return (NULL);
}
