#include "main.h"
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen_helper - helps find the length of a string
* @s: parameter
*
* Return: always 0
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
* new_dog - create a new structure
* @name: first element
* @age: second element
* @owner: third element
*
* Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * _strlen_helper(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * _strlen_helper(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = dog_t->name;
	new_dog->age = dog_t->age;
	new_dog->owner = dog_t->owner;

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
