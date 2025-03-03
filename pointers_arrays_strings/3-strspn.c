#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: intial segment
* @accept: parameter
*
* Return: number of bytes from the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] != accept[i])
		{
			break;
		}
	}

	return (s[i]);
}
