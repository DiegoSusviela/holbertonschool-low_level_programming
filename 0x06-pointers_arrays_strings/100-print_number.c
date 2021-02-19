#include "holberton.h"

/**
 * print_number - imprime
 * @n: numero a imprimir
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int resto;

	resto = n % 10;
	if (n >= 10)
	{
		n = n / 10;
		print_number(n);
	}
	_putchar('0' + resto);
}
