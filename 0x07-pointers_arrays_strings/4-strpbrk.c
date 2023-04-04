#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for
 * any of a set of bytes
 *
 * @s: input char
 *
 * @accept: input char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + 1);
		}

	}

	return (NULL);
}

