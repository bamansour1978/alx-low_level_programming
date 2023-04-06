#include "main.h"

/**
 *_sqrt_help - function that seek if sqrt exist
 *
 *@num: input integer
 *
 *@val: input integer
 *
 *Return: integer
 */

int _sqrt_help(int num, int val)
{
	if (val * val == num)
	{
		return (val);
	}
	else
	{
		return (((val * val) > num) ? (-1) : (_sqrt_help(num, val + 1)));
	}
}

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *
 *@n: input integer
 *
 *Return: integer
 */

int _sqrt_recursion(int n)
{
	return ((n < 0) ? (-1) : _sqrt_help(n, 0));
}
