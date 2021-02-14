#include "holberton.h"
#include "2-strlen.c"

/**
 * print_triangle - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */


void print_rev(char *s)
{
	int contador = _strlen(s) - 1;

	while (contador >= 0)
	{
		_putchar(*(s + contador));
		contador--;
	}
	_putchar('\n');
}

