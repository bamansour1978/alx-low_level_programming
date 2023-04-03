#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: area memory filled
 *
 * @b: character to copy
 *
 * @n: number of b copy
 *
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
