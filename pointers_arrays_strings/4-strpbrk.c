#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: source string
* @accept: accepted characters
*
* Return: a pointer to the byte in s or NULL if no such bytes found
*/

char *_strpbrk(char *s, char *accept)
{

	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
