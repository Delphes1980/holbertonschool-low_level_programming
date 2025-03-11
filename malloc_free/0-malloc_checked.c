#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: parameter
*
* Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *mal;

	mal = malloc(sizeof(unsigned int) * b);

	if (mal == NULL)
	{
		exit(98);
	}

	exit(0);
}
