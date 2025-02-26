#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: parameter
*
* Return: 0 if there is no number in the string
*/

int _atoi(char *s)
{
	int i = 0;
	int num = 0;

	if (s[i] >= 48 && s[i] <= 57)
	{
		num = num * 10 + (s[i] - '0');
	}

	for (i = 0; s[i] != 0; i++)
	{
		return (0);
	}

	return (0);
}
