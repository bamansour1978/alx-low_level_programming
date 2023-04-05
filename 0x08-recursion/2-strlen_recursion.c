#include "main.h"

/**
 *_strlen_recursion -  a function that returns the length of a string.
 *
 *@s: input character
 *
 * Return: integer (length)
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	a = ((*s != '\0') ? 1 + _strlen_recursion(s + 1) : 0);
	return (a);

}
