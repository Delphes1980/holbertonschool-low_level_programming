#include "main.h"

/**
* _memset - fills the memory with a constant byte
* @n: parameter
* @b: constant byte
* @s: memory area
*
* Return: return pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
