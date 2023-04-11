#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars, and
 * initializes it with a specific char.
 *
 *@size: size of array
 *
 *@c: character
 *
 *Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
		return (NULL);

	while (size--)
		ar[size] = c;

	return (ar);
}
