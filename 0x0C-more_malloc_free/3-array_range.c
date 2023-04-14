#include "main.h"
#include <stdlib.h>

/**
 *array_range - a function that creates an array of integer
 *
 *@min: integer
 *@max: integer
 *
 *Return: pointer of integer
 */

int *array_range(int min, int max)
{
	int a, size;
	int *p;

	if (max < min)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	while (p == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (min <= max)
	{
		p[a] = min++;
		a++;
	}

	return (p);

}
