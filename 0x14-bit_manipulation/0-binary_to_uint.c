#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: const char pointing to a string of 0 and 1
 *
 * Return: unsigned int 0 or 1 or NULL;
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	if (b == 0)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		dec = (dec << 1) | (b[i] - '0');
	}

	return (dec);
}
