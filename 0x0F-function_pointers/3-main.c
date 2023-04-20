#include "3-calc.h"
#include <stdlib.h>
/**
 * main- check a code
 *
 *@argc: number of arguments
 *@argv: array's char
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int c, d;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	c = atoi(argv[1]);
	d = atoi(argv[3]);

	printf("%d\n", operation(c, d));
	return (0);
}
