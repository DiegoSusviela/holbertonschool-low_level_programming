#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct datatype - imprime
 * @type: numero a imprimir
 * @func: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

typedef struct datatype
{
	char *type;
	void (*func)(va_list list);
} data_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
