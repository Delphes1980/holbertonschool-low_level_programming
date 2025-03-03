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

	char temp;

	if (*s == '\0' || *accept == '\0')
	{
		return ('\0');
	}

	while (*s != '\0')
	{
		temp = *accept;

		while (temp != '\0')
		{
			if (*s == temp)
			{
				return (s);
			}

			temp++;
		}

		s++;
	}

	return ('\0');
}
