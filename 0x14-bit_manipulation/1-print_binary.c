#include "holberton.h"

/**
 * print_binary - omaiga
 * @n: wopa
 *
 * Return: the returnas
 */

void print_binary(unsigned long int n)
{
	int acom, aux, tope = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (acom = 63; acom >=  0; acom--)
	{
		aux = n >> acom;
		if (aux & 1)
		{
			tope = 1;
			_putchar('1');
		}
		else
			if (tope == 1)
				_putchar('0');
	}
}
