#include "main.h"

/**
* strpcy - copy a string
* @dest: destination value
* @src : source value
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while ((dest[i] = src[i]) != '\0')
	{
		dest++;
		src++;
	}

	return (dest);
}
