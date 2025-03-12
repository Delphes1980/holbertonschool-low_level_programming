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
	d->name = (d->name == NULL) ? "(nil)\n" : d->name;
	d->age = (d->age == 0) ? "(nil)\n" : d->age;
	d->owner = (d->owner == NULL) ? "(nil)\n" : d->owner;

	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s\n", d->owner);
}
