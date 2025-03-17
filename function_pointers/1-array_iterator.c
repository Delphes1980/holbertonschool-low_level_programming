#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function given as parameter
* @array: array to be executed
* @size: size of the array
* @action: pointer to the function
*
* Return:nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (size != '0' && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
