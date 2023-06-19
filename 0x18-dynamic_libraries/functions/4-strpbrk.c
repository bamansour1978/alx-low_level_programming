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
	int b;


	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}

	return ('\0');
}

