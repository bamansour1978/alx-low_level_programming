#include "main.h"

/**
 * factorial - function that calcul the factorial of a given number.
 *
 *@n : input integer
 *
 *Return: -1 if n<0 , 1 else if n=0, a (factorial)
 */

int factorial(int n)
{
	int a = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		a = ((n > 1) ? n * factorial(n - 1) : 1);
		return (a);
	}
}
