#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: unsigned long int to search
 * @index: bit's index
 *
 * Return: bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index <= 63)
	{
		val_bit = (n >> index) & 1;
		return (val_bit);
	}
	return (-1);
}
