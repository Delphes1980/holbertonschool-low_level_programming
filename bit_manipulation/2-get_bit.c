#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: the number to check
* @index: the given index
*
* Return: the value of the bit (0 or 1) or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	num = (n >> index) & 1;

	return (num);

}
