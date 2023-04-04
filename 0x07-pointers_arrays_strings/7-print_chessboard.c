#include <unistd.h>
#include "main.h"


/**
 * print_chessboard - fills memory with byte
 * @a: input
 *
 * Return: --
 *
 */


void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
