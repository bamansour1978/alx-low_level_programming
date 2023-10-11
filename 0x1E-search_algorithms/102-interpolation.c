#include "search_algos.h"

/**
 * interpolation_search - search for a value using interpolation
 *
 * @array: array[int]
 * @size: array'r size
 * @value: value research
 *
 * Return: value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l, r, j;

	if (!array)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		j = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			r = j - 1;
		else
			l = 1 + j;
	}

	return (-1);
}
