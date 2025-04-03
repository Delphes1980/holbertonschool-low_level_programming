#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: the number to check
* @index: the given index starting to 0
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *num = n;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*num = (1 << index) | (*num);

	return (1);
}
