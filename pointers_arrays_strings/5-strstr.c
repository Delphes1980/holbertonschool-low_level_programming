#include "main.h"

/**
* _strstr - locates a substring
* @haystack: string to find
* @needle: string to search
*
* Return: a pointer to the beginning of the located substring
* or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{

	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + a);
		}

		i++;
	}

	return ('\0');
}
