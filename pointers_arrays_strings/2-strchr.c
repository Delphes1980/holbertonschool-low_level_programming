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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

	s++;
	}
	return ('\0');
}
