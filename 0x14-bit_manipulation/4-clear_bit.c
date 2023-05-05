#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given
 * index.
 *
 * @n: pointer
 * @index: unsigned int bit to clear
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n &= (~(1UL << index));
		return (1);
	}
	return (-1);
}
