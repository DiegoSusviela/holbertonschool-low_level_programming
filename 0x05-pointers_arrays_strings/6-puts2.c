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
			if (*(str + contador + 1))
				contador += 2;
			else
				contador++;
		}
		_putchar('\n');
}
