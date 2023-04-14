#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *
 *@nmemb: input unsigned integer
 *@size: input unsigned integer
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c, d;

	char *ar;

	d = nmemb * size;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < d; c++)
		ar[c] = 0;

	return (ar);
}
