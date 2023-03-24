#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, b;

		for (k = 1; k <= size; k++)
		{
			for (b = k; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= k; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
