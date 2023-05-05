#include "main.h"

/**
 * get_endianness -  a function that checks the endianness
 *
 * Return: 0 (big endian) 1 (litle endian)
 */

int get_endianness(void)
{
	unsigned int i = 1;
	int result;

	result = ((*(char *)&i == 1) ? (1) : (0));
	return (result);
}
