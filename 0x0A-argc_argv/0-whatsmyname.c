#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *main - a program that prints its name, followed by a new line
 *
 *@argc: number of arguments
 *
 *@argv: array of strings
 *Return: zero
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
