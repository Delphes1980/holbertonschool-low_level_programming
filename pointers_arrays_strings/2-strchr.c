#include "main.h"

/**
* _strchr - locates a character in a string
* @c: parameter
* @s: string
*
* Return: return to the first occurence or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}

	s++;
	}

	if (s[i] == '\0')
	{
		return (s);
	}

	return ('\0');
}
