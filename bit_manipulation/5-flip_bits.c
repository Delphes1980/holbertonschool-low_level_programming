#include "main.h"

/**
* flip_bits - returns the number of bits that need to be flipped
* to convert one number into another
* @n: the first number
* @m: the second number
*
* Return: the number of bits that need to be flipped to convert n to m
*
*Description: flipped_bits: identification of the number of bits
*  that differ between n & m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped_bits = n ^ m;
	unsigned long int count = 0;

	if (n == m) /** if the 2 numbers are equal, no bits to be flipped */
	{
		return (0);
	}

	while (flipped_bits != 0)
	{
		flipped_bits = flipped_bits & (flipped_bits - 1);
		count++;
	}

	return (count);
}
