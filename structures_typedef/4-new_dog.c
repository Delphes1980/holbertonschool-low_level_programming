#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen_helper - helps find the length of a string
* @s: parameter
*
* Return: the lenght of the string
*/

int _strlen_helper(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
* _strcpy - Copy a string
* @dest: Destination value
* @src: Source value
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}


/**
* new_dog - create a new structure
* @name: first element
* @age: second element
* @owner: third element
*
* Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = malloc(sizeof(char) * _strlen_helper(name) + 1);

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * _strlen_helper(owner) + 1);

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);

	return (new);
}
