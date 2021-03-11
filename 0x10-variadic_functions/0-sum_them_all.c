#include "variadic_functions.h"
#include <stdarg.h>

/**
 * recursion - imprime
 * @s: numero a imprimir
 * @position: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int asum;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(sum_list, n);
	for (asum = 0; asum < n; asum++)
		sum += va_arg( sum_list, int );
	va_end(sum_list);
	return (sum);
}
