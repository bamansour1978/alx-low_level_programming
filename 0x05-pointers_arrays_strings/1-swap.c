#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: input parameter a
 * @b: input parameter b
 *
 * Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
