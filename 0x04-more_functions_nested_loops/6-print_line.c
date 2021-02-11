#include "holberton.h"

/**
 * print_line - Entry point
 * @n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
