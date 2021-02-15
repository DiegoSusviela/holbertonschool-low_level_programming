#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	char contador = 0;

	if (_strlen(str) > 0)
	{		
		while (*(str + contador))
		{
			_putchar(*(str + contador));
			contador = contador + 2;
		}
		_putchar('\n');
	}
}
