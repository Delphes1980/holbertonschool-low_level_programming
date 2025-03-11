#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates 2 strings
* @s1: first string to concatenate
* @s2: second string to concatenate
* @n: parameter
*
* Return: the 2 strings concatenate
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l = 0;
	unsigned int k;
	char *concatenate;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		l = j;

	else
		l = n;

	concatenate = malloc(sizeof(char) * (i + l + 1));

	if (concatenate == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		concatenate[k] = s1[k];
	}

	for (k = 0; k < l; k++)
	{
		concatenate[i + k] = s2[k];
	}

	concatenate[i + l] = '\0';

	return (concatenate);
}
