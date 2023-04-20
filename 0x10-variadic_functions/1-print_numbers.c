#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *@...: others arguments
 *
 * Return: no value to return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
