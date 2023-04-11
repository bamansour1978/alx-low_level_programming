#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - a program that adds positive numbers.
 *
 *@argc: number of arguments
 *
 *@argv: array of string
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		while (*num != '\0')
		{
			if (!isdigit(*num))
			{
				printf("Error\n");
				return (1);
			}
		num++;
		}

		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);

}
