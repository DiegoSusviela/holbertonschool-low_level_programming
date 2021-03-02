#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: wopa
 * @c: sdkna
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int pos;
	char *aux;

	if (size == 0)
		return (NULL);
	aux = malloc(size * sizeof(char));
	if (!aux)
		return (NULL);
	for (pos = 0; pos < size; pos++)
		aux[pos] = c;
	return (aux);
}
