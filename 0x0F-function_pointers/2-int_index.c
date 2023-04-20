#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - a function that searches for an integer.
 *
 *@array: array integer
 *@size: array's size
 *@cmp: pionter a function
 *
 *Return: integer
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);

		j = 0;
		while (j < size)
		{
			if (cmp(array[j]))
			{
				return (j);
			}
			j++;
		}
	}
	return (-1);
}
