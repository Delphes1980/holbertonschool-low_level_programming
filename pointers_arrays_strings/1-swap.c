#include "main.h"

/**
* swap_int - swaps the value of 2 integers
* @a: first number to swap
* @b: second number to swap
*
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
