#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: a string of 0 and 1 chars
*
* Return: the converted number, or 0 if b is NULL or if
* there is one or more chars in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		num = num << 1;
		num = num + (b[i] - '0');

		i++;
	}

	return (num);
}
