#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: parameter
*
* Return: char
*/

char *cap_string(char *str)
{
	int i, j;
	int cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	i = 0;

	while (str[i] != '\0')
	{
		if (cap && (str[i]>= 'a' && str[i] <= 'z'));
		{
			str[i] = str[i] - 32;
		}

	cap = 0;

	for (j = 0; sep[j] != '\0'; j++)
	{
		if (str[i] == sep[j])
		{
			cap = 1;
			break;
		}
	}

	i++;
	}

	return (str);
}
