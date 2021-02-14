#include "holberton.h"

/**
 * print_triangle - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int marker = 0;

	while (*(str + marker))
	{
		_putchar(*(str + marker));
		marker++;
	}
	_putchar('\n');
}
