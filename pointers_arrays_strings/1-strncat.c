#include "main.h"

/**
* _strncat = concatenation of 2 strings
* @src: source value
* @dest: destination value
* @n: most n bytes from src
*
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
		while (n && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}

	dest[i + n] = '\0';

	return (dest);
}
