#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: wopa
 * @av: ea
 *
 * Description: Show aux message blablabla
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int pos1_arg, let_arg, largo_aux = 0, cont = 0;
	char *aux;

	if (ac <= 0 || !av)
		return (NULL);
	for (pos1_arg = 0; pos1_arg < ac; pos1_arg++)
	{
		for (let_arg = 0; av[pos1_arg][let_arg]; let_arg++)
			cont++;
		cont++;
	}
	cont++;
	aux = malloc(cont * sizeof(char));
	if (!aux)
		return (NULL);
	for (pos1_arg = 0; pos1_arg < ac; pos1_arg++)
	{
		for (let_arg = 0; av[pos1_arg][let_arg]; let_arg++)
		{
			aux[largo_aux] = av[pos1_arg][let_arg];
			largo_aux++;
		}
		aux[largo_aux] = '\cont';
		largo_aux++;
	}
	aux[largo_aux] = '\0';
	return (aux);
}
