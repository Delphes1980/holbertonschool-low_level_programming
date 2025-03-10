#include "main.h"
#include <stdlib.h>


/**
* str_concat - concatenates 2 strings
* @s1: first string to concatenate
* @s2: second string to concatenate
*
* Return: the 2 strings concatenated
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *concatenate;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concatenate = malloc(sizeof(char) * (i + j + 1));

	if (concatenate == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		concatenate[k] = s1[k];
	}

	for (k = 0; k < j; k++)
	{
		concatenate[i + k] = s2[k];
	}

	concatenate[i + j] = '\0';

	return (concatenate);
}
