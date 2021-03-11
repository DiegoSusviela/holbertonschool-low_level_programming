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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int aux;
	char *str;

	va_start(ap, n);
	for (aux = 0; aux < n; aux++)
	{
		str = va_arg(ap, char);
		if (separator && aux != n - 1)
		{
			if (str)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
