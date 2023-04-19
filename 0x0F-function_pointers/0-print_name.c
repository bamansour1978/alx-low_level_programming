#include "function_pointers.h"

/**
 *print_name - a function that prints a name.
 *
 *@name: input name char
 *
 *@f: a function pointer char
 *
 *Return: no value to return
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
