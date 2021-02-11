#include "holberton.h"

/**
 * more_numbers - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, a, numero, b;

	for (i = 0 ; i <= 9; i++)
		for (numero = 0; numero <= 14; numero++)
		{
			b = numero % 10;
			if (numero >= 10)
			{
				a = numero / 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}
	       	_putchar('\n');
}
