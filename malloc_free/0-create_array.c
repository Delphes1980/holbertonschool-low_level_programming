#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: size of the array
* @c: value of the element of the array
*
* Return: NULL if size = 0, a pointer or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
