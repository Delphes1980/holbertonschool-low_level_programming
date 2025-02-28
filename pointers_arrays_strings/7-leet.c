#include "main.h"

/**
* leet - encode a string to 1337
* @code: parameter
*
* Return: char
*/

char *leet(char *code)
{
	int i, j;
	char num[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	for (i = 0; code[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (code[i] == letters[j] || code[i] == letters[j + 1])
			{
				code[i] = num[j / 2];
				break;
			}
		}

	}


	return (code);
}
