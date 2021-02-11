#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			if (j <= i)
				_putchar(' ');
			else
				_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}