#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Disply type of  integer
 * @n: integer to be cheker
 * Return:0 always
 */


void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
}
