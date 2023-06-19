#include "main.h"

/**
 * _memcpy -  function copies @n bytes from memory area
 * @src to memory area @dest
 *
 * @dest: to memory area
 *
 * @src: bytes from area memory
 *
 * @n: number of bytes copies
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
