#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 *@width: input integer
 *
 *@height: input integer
 *
 *Return: integer
 */

int **alloc_grid(int width, int height)
{
	int **ar = malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0 || ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ar[j]);
			}
			free(ar);
			return (NULL);
		}
	}

	return (ar);
}
