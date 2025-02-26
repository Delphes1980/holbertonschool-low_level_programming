#include "main.h"

/**
* _strcat - concatenation of 2 strings
* @src: source value
* @dest: destinaton value
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j, final;
	char final = *dest

	for (i = 0; (dest[i] != '\0'); i++)
	{
		for (j = 0; (src[j] != '\0'); j++)
		{
			final = dest[i] + src[j];
		}

	return (dest);
}
