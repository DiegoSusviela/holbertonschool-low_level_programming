#include "holberton.h"

/**
 * puts2 - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int contador = 0;

		while (*(str + contador))
		{
			_putchar(*(str + contador));
			contador += 2;
		}
		_putchar('\n');
}
