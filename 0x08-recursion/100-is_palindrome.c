#include "main.h"
#include <stdio.h>

/**
 *is_palindrome_help2 - count index number
 *
 *@s: input pointer of string
 *
 *Return: integer
 */

int is_palindrome_help2(char *s);
int is_palindrome_help1(char *s, int j, int len);
int is_palindrome(char *s);
int is_palindrome_help2(char *s)
{
	return ((s[0] != '\0') ? ((is_palindrome_help2(s + 1) + 1)) : 0);
}

/**
 *is_palindrome_help1 - help1 function
 *@s: input string
 *@start: integer to left
 *@end: integer to right
 *@mod: integer 
 *Return: 1 or 0
 */

int is_palindrome_help1(char *s, int j, int len)
{
	if (s[j] == s[len]
	{
	if (j > len /2
	{
	return (1);
	}
	else
	{
	return (is_palindrome_help1(s, j + 1, len - 1))
	}
	}
	else
	{
	return (0)
	}
}

/**
 *is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 *@s: input string
 *
 *Return: integer
 */

int is_palindrome(char *s)
{
        return ((is_palindrome_help1(s, 0, is_plindrome_help2(s) - 1));
}

