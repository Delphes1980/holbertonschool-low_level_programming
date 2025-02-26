#include "main.h"

/**
* _strpcy - copy a string
* @dest: destination value
* @src : source value
*
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*dest = *src;
	}

	dest++;

	return (dest);
}
