#include "main.h"
#include "dog.h"
#include <stdio.h>

/**
* print_dog - prints a structure
* @d: pointer to the structure
*
* Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age != 0) ? d->age : 0.0);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
