#include "holberton.h"


/**
 * print_numbers - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
		_putchar('0' + numero);
	_putchar('\n');
}
