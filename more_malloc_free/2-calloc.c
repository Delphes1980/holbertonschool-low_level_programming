#include "main.h"
#include <stdlib.h>
#include <strings.h>

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

	bzero(cal, nmemb * size);

	return (cal);
}
