#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that prints the opcodes of its own main function.
 *
 *@argc: number of arguments
 *@argv: array's arguments
 *
 *Return: integer
 */

int main(int argc, char *argv[])
{
	char *opc_codes = (char *) main;
	int number_of_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < number_of_bytes)
	{
		printf("%02x", opc_codes[i] & 0x0F);
		if (i != number_of_bytes - 1)
			printf(" ");
		i++;
	}

	printf("\n");
	return (0);
}


