#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 *
 * @b: input unsigned integer
 *
 * Return: no value to return
 */

void *malloc_checked(unsigned int b)
{
	int *ar = malloc(b);

	if (ar == NULL)
		exit(98);
	return (ar);
}
