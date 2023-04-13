#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - a function that concatenates two strings
 *
 *@s1: input string1
 *@s2: input string2
 *@n: unsigned integer
 *
 *Return: character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int x, y, z;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
			;

	}

	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}

	if (y > n)
		y = n;

	ar = malloc(sizeof(char) * (x + y + 1));

	if (ar == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		ar[z] = s1[z];

	for (z = 0; z < y; z++)
		ar[z + x] = s2[z];

	ar[x + y] = '\0';
	return (ar);
}
