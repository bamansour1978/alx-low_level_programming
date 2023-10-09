#include "search_algos.h"
/**
 * linear_search - A function searches for a value in int array
 * with a leaner search.
 *
 * @array: pointer of int
 * @size: len array
 * @value: to search
 *
 * Return: 1st index or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t j;

if (!array)
return (-1);

for (j = 0; j < size; j++)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
if ((value) == (array[j]))
return (j);
}

return (-1);
}
