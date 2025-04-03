#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @index: the given index starting to 0
* @n: the number to check
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *num = n;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	*num = ~(1 << index) & (*num);

	return (1);
}
