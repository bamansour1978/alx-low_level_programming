#include "main.h"
/**
 * print_rev - prints a reverse string to stdout
 * @s: pointer to the string to print
 * Return:void
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}

