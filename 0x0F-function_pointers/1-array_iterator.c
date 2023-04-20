#include "function_pointers.h"

/**
 *array_iterator -a function executes a function given as a parameter
 * on each element of an array.
 *
 *@array: integer array
 *
 *@size: array's size
 *
 *@action: a pointer to the function
 *
 *Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action && array)
	{
		j = 0;
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}
