#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
*
* Return: pointer to the array of integers
*/

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (min + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= min; i++)
	{
		array[i + 1] = max;
	}

	return (array);
}
