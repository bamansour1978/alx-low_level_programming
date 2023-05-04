#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 *
 * @n: pointer
 * @index: unsigned int of the bit to set to 1
 *
 * Return: 1 or -1
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n |= (1UL << index);
		return (1);
	}
	return (-1);
}
