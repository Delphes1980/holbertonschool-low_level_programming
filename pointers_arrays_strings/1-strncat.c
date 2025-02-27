#include "main.h"

/**
* _strncat - concatenates 2 strings
* @dest: destination value
* @src: source value
* @n: limit of concatenation
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
			dest[i + 1] = src[j];
			i++;
			j++;
		}

	dest[i + n] = '\0';

	return (dest);
}
