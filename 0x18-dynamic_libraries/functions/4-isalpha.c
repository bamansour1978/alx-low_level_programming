#include "main.h"

/**
 * _isalpha - verificate alphabetic
 * @c: the character
 * Return: 1 for alphabetic 0 else
 */

int _isalpha(int c)
{
if ((c  >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
