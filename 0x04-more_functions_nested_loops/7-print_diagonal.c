#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, b;

		for (k = 0; k < n; k++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == k)
					_putchar('\\');
				else if (b < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
