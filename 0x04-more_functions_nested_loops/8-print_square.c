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
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
