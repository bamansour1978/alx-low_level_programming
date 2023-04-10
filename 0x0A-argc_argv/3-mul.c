#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that multiplies two numbers.
 *
 *@argc: number of arguments
 *
 *@argv: array of string
 *
 *Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int dot, num1, num2;

	while (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		dot = num1 * num2;
		printf("%d\n", dot);
	}
	return (0);
}
