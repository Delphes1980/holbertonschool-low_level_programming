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
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	if (s[0] == '+')
	{
		i++;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}

		else
		{
			break;
		}
	}

	num = num * sign;

	return (num);
}
