#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: input string
 *
 * @accept: input bytes
 *
 * Return: jtr unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int jtr, ntr;

	for (jtr = 0; s[jtr] != '\0'; jtr++)
	{
		for (ntr = 0; accept[ntr] != s[ntr]; ntr++)
		{
			if (accept[ntr] == '\0')
				return (jtr);
		}
	}
	return (jtr);
}
