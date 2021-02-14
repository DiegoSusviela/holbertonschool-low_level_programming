#include "holberton.h"
#include "2-strlen.c"

/**
 * print_triangle - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int tope, length = _strlen(str);

	tope = length / 2;
	if (length % 2)
		tope ++;
	while (tope < length)
	{
		_putchar(*(str + tope));
		tope++;
	}
	_putchar('\n');
}
