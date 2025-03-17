#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to search in
* @size: size of the array
* @cmp: function used to compares the value
*
* Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (size != '0' && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}

		return (0);
	}

	else
	{
		return (-1);
	}

	return (array[i]);
}
