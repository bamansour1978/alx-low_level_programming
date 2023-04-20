#include "3-calc.h"

/**
 *op_add - add tow integers
 *@a: int_1
 *@b: int_2
 *
 *Return: integer
 */


int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - sub tow integers
 *@a: int_1
 *@b: int_2
 *
 *Return: integer
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - mul tow integers
 *@a: int_1
 *@b: int_2
 *
 *Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - div tow integers
 *@a: int_1
 *@b: int_2
 *
 *Return: integer
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
 *op_mod - mod tow integers
 *@a: int_1
 *@b: int_2
 *
 *Return: integer
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
