#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - imprime
 * @separator: numero a imprimir
 * @n: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int aux;

	va_start(ap, n);
	for (aux = 0; aux < n; aux++)
	{
		if (separator && aux != n - 1)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
