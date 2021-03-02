#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: wopa
 * @s2: ea
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int larg1 = 0, larg2 = 0, larg3, cont;
	char *aux;

	while (s1[larg1])
		larg1++;
	while (s2[larg2])
		larg2++;
	larg3 = larg1 + larg2 + 1;
	aux = malloc(larg3 * sizeof(char));
	if (!aux)
		return (NULL);
	for (cont = 0; cont < larg1; cont++)
		aux[cont] = s1[cont];
	for (cont = 0; cont < larg2; cont++)
		aux[cont + larg1] = s2[cont];
	aux[larg3 - 1] = '\0';
	return (aux);
}
