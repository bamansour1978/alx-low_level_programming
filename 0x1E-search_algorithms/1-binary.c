#include "search_algos.h"

/**
 * binary_search - search a value in array int with binary search
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: fst index or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t l, r, j;

if (array == NULL)
return (-1);

l = 0;
r = size - 1;
while (r >= l)
{
printf("Searching in array: ");

for (j = l ; j < r ; j++)
printf("%d\n", array[j]);
printf("%d\n", array[j]);

j = (r - l) / 2 + l;
if (array[j] < value)
l = j + 1;
else if (array[j] > value)
r = j - 1;
else
return (j);
}
return (-1);
}
