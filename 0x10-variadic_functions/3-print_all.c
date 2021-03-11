#include "variadic_functions.h"

/**
 * print_strings - imprime
 * @separator: numero a imprimir
 * @n: some number idk tbf
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void print_char_2(va_list list)
{
	char *s_aux;
	
	s_aux = va_arg(list, char*);
	if (s_aux)
		printf("%s", s_aux);
	else
	{
		printf("(nil)");
		return;
	}
}


void print_all(const char * const format, ...)
{
	data_t tu_vieja[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_2},
		{NULL, NULL},
	};

	int index_tuvieja, i = 0;
	va_list list;
	char *separator = "";

	va_start (list, format);

	while (format && format[i])
	{
		index_tuvieja = 0;
		while (tu_vieja[index_tuvieja].type)
		{
			if (*tu_vieja[index_tuvieja].type == format[i])
			{
				printf("%s", separator);
				tu_vieja[index_tuvieja].func(list);
				separator = ", ";
			}
			index_tuvieja++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
