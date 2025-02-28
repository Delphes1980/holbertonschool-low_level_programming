#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: first string to be compared
* @s2: second string to be compared
*
* Return: an integer
*/

int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j])
	{
		i++;
		j++;
	}

	if ((s1[i] != '\0') > (s2[j] != '\0'))
	{
		return (1);
	}

	else if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (0);
	}

	else
	{
		return (-1);
	}
}
