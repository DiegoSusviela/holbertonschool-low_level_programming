#include "holberton.h"

/**
 * _print_rev_recursion - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
