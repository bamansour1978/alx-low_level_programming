#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	half_length = length / 2;
	str -= half_length;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
