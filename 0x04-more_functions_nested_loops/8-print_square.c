#include "holberton.h"

/**
 * print_square - Entry point
 * @size: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; i++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
