#include "main.h"

/**
 * print_sign - main function
 * @n: number
 * Return: 1 if n positif 0 if n negatif -1 other
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
