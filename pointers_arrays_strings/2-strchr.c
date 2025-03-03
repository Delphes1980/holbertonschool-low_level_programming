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

	if (*s != c)
	{
		return (0);
	}

	while (*s == c)
	{
	s++;
	}
	return (s);
}
