#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int curr;
	unsigned long int xor;

	xor = n ^ m;

	i = 63;
	while (i >= 0)
	{
		curr = xor >> i;
		if ((curr - 2 * (curr >> 1)) == 1)
			count++;
		i--;
	}

	return (count);
}
