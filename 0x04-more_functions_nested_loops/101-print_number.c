#include "holberton.h"

/**
 * imprimir - Entry point
 * @num: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void imprimir(int num)
{
	int resto;

	resto = num % 10;
	if (num >= 10)
	{
		num = num / 10;
		imprimir(num);
	}
	_putchar('0' + resto);
}

/**
 * print_number - Entry point
 * @n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n >= 0)
		imprimir(n);
	else
	{
		_putchar('-');
		imprimir(-n);
	}
}
