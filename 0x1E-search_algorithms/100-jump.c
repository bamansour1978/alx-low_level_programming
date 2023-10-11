#include "search_algos.h"

/**
 * jump_search - search a value in array[int]
 *
 * @array: array[int]
 * @size: array's size
 * @value: value to research
 *
 * Return: value or -1
 */

int jump_search(int *array, size_t size, int value)
{
		size_t j, i, s;

		if (array == NULL)
			return (-1);

		s = sqrt(size);

		for (i = j = 0; j < size && array[j] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			i = j;
			j += s;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", i, j);

		j = j < size - 1 ? j : size - 1;

		for (; i < j && array[i] < value; i++)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		return (array[i] == value ? (int)i : -1);
}
