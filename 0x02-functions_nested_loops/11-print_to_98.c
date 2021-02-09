#include "holberton.h"

/**
 * imprimir - imprime
 * @num: numero a imprimir
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
 * print_to_98 - Entry point
 * @n: numero que pasan
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				imprimir(-n);
			}
			else
				imprimir(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
		for (; n > 98; n--)
		{
			imprimir(n);
			_putchar(',');
			_putchar(' ');
		}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
