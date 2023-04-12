#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **_strdup -  a function that returns a pointer to a newly
 *allocated space in memory, which contains a copy
 *of the string given as a parameter.
 *
 *@str: character
 *
 *Return: array or NULL
 */

char *_strdup(char *str)
{
	char *ar;
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
		;

	ar = malloc(size * sizeof(*str) + 1);

	if (ar == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
			ar[i] = str[i];
	}
	return (ar);

}
