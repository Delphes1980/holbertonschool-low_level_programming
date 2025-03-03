#include "main.h"

/**
* _memcpy - function that copies area
* @n: parameter
* @dest: destination memory
* @src: source memory
*
* Return: return to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
