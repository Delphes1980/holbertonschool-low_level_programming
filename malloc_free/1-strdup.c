#include "main.h"
#include <stdlib.h>

/**
* _strdup - a pointer which contains a copy of the string given as parameter
* @str: parameter
*
* Return: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *duplicate;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	duplicate = malloc((i + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		duplicate[j] = str[j];
	}

	duplicate[j] = '\0';

	return (duplicate);
}
