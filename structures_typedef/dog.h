#ifndef DOG_H
#define DOG_H

#include <unistd.h>

/**
* struct dog - structure with different elements
* @name: first element
* @age: second element
* @owner: third element
*
* Description: a structure that includes nam of the dog,
* the age of the dog and the owner of the dog entered by users
*/

	struct dog
	{
	char *name;
	float age;
	char *owner;
	};

#endif
