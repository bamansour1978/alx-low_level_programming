#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - main function
 *
 *@a: input
 *
 *@size: size
 *
 */


void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + (size * i + i));
		s2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", s1);
	printf("%d\n ", s2);
}

