#include "holberton.h"

/**
 * recursion - imprime
 * @s: numero a imprimir
 * @position: un char ahi
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/

void recursion(char *s, int position)
{
	_putchar(*(s + position));
	position++;
	if (*(s + position))
		recursion(s, position);
}

/**
 * _puts_recursion - imprime
 * @s: numero a imprimir
 *
* Description: Show a message blablabla
* Return: Always 0 (Success)
*/
void _puts_recursion(char *s)
{
	int position = 0;

	if (*s)
		recursion(s, position);
	_putchar('\n');
}
