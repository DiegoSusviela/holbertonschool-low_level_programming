#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - imprime
 * @n: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int aux;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(sum_list, n);
	for (aux = 0; aux < n; aux++)
		sum += va_arg(sum_list, int);
	va_end(sum_list);
	return (sum);
}
