#include "main.h"
#include <stdlib.h>

/**
 *_realloc - a function that reallocates a memory block using malloc and free
 *
 *@ptr: pointer
 *@old_size: input unsigned integer
 *@new_size: input unsigned integer
 *
 *Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *p;
	unsigned int a, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	while (p == NULL)
		return (NULL);

	if (new_size > old_size)
		n = old_size;
	a = 0;
	while (a < n)
	{
		p[a] = oldp[a];
		a++;
	}
	free(ptr);
	return (p);
}
