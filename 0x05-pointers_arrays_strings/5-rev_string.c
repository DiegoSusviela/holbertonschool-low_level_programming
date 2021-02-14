#include "holberton.h"

/**
 * rev_string - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int contador = 0, marker = 0;
	char aux[999];

	while (*(s + contador))
	{
		*(aux + contador) = *(s + contador);
		contador++;
	}
	contador--;
	while (contador >= 0)
	{
		*(s + contador) = *(aux + marker);
		marker++;
		contador--;
	}
}
