#include "main.h"

/**
 *_pow_recursion - a function that returns the value of x
 *raised to the power of y.
 *
 *@x: input integer
 *
 *@y: input integer
 *
 *Return: integer number
 */

int _pow_recursion(int x, int y)
{
	int a;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
	a = ((y > 0) ? x * _pow_recursion(x, y - 1) : 1);
		return (a);
	}
}
