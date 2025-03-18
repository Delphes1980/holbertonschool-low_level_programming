#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - calculates the sum of 2 integers
* @a: first integer
* @b: second integer
*
* Return: the result of the operation
*/

	int op_add(int a, int b)
	{
		return (a + b);
	}

/**
* op_sub - calculates the difference of 2 integers
* @a: first integer
* @b: second integer
*
* Return: the result of the operation
*/

	int op_sub(int a, int b)
	{
		return (a - b);
	}

/**
* op_mul - calculates the product of 2 integers
* @a: first integer
* @b: second integer
*
* Return: the result of the operation
*/

	int op_mul(int a, int b)
	{
		return (a * b);
	}

/**
* op_div - calculates the result of the division of 2 integers
* @a: first integer
* @b: second integer
*
* Return: the result of the operation
*/

	int op_div(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		return (a / b);
	}

/**
* op_mod - calculates the remainder of 2 integers
* @a: first integer
* @b: second integer
*
* Return: the remainder of the division of 2 integers
*/

	int op_mod(int a, int b)
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		return (a % b);
	}
