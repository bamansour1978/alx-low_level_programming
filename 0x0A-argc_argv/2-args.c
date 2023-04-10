#include "main.h"
#include <stdio.h>

/**
 *main - a program that prints all arguments it receives.
 *
 *@argc: number of argument
 *
 *@argv: array of string
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{

	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}

	return (0);
}
