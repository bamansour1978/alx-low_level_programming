#include "main.h"

/**
 * _isdigit - checks for digit
 * @c:The chacters  to be checkers
 * Return: 1 for digit or 0 else
 */

int _isdigit(int c)
{
	if (c >= 45 && c <= 57)
		return (1);
	else
		return (0);
}
