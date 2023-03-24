#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int max;
	long int y;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			max = y;
			x = x / y;
		}
	}
	if (x > 2)
		max = x;

	printf("%ld\n", max);

	return (0);
}
