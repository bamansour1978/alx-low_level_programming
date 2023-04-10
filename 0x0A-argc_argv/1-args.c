#include "main.h"
#include <stdio.h>
/**
 *main - a program that prints the number of arguments passed into it.
 *
 *@argc: number of argument
 *
 *@argv: array of argument
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
