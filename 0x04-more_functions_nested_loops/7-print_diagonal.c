#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('92');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('92');
		_putchar('\n');
	}
}
