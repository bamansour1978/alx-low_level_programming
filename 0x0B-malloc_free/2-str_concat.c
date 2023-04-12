#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings.
 *
 *@s1: string
 *
 *@s2: string
 *
 *Return: charactere
 */

char *str_concat(char *s1, char *s2)
{
	int index, ar_index = 0, len = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ar = malloc(len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		ar[ar_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		ar[ar_index++] = s2[index];

	return (ar);
}
