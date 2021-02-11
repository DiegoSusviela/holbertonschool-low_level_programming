#include "holberton.h"


/**
 * print_most_numbers - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		if (numero != 2 && numero != 4)
			_putchar('0' + numero);
	}
	_putchar('\n');
}
