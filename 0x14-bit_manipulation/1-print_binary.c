#include "main.h"

/**
 * print_binary -  a function that prints the binary representation
 * of a number
 *
 * @n: input decimal number
 *
 * Return: no value to return
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int curr;
	int count = 0;

	i = 63;
	while (i >= 0)
	{
		curr = n >> i;

		if (curr >> 0 & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
