#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

/*
 * Abdennebi BAMANSOUR
 * Variadic_functions.h
 * functions declaration for the 0x0F-variadic_functions TASK
 */

#include <stdarg.h>

/**
 *struct printer - define new struct type
 *@symbol: data taype's symbol
 *@print: function pointer
 *
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif/*VARIADIC_FUNCTION_H*/
