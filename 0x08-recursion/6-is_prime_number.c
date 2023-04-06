#include "main.h"

/**
 *is_prime_number_help - function main
 *
 *@n: input integer
 *
 *@i: input integer
 *
 *Return: integer
 */

int is_prime_number_help(int n, int i)
{
	if (i == n)
	{
		return (1);
	}

	else
	{
	return ((n % i == 0) ? 0 : is_prime_number_help(n, i + 1));
	}
}


/**
 *is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 *
 *@n: input integer
 *
 *Return: integer
 */

int is_prime_number(int n)
{

	return ((n <= 1) ? 0 : (is_prime_number_help(n, 2)));
}
