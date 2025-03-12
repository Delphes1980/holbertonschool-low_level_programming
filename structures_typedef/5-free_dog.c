#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
* free_dog - function that frees the structure dog
* @d: pointer to the structure dog
*
* Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
