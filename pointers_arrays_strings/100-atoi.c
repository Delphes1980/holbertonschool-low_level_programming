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
	unsigned int num = 0;
	int sign = 1;

	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}

		else if (num > 0)
		{
			break;
		}

	i++;
	}

	num = num * sign;

	return (num);
}
