#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 *
 */

int _strlen(char *s)
{
	int size = 0;
	while (s[size] != '\0')
		size++;
	return (size + 1);
}

/**
 *
 *
 *
 *
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	int siz1, siz2, i, j;
	char *ar;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	siz1 = _strlen(s1);
	siz2 = _strlen(s2);

	ar = (char *) malloc(((siz1 + siz2) - 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ar[i] = s1[i];
	for (j = 0; s2[j] != '\0';j++)
                ar[i] = s2[j];
	ar[i] = '\0';
	return (ar);
}	

