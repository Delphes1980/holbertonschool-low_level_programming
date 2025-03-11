#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @size: width of the array
* @nmemb: height of the array
*
* Return: to a pointer of a 2 dimensioanl array of integers
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *cal;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cal = malloc(nmemb * size);

	if (cal == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			cal[i][j] = 0;
		}
	}

	return (cal);
}
