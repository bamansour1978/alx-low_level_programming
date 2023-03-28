#include "main.h"
/**
 * puts2 - Entry Function
 * @str: char
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str += 1;
		i++;
	}
	_putchar('\n');
}
