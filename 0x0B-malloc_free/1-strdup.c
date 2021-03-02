#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	unsigned int cant = 0, pos2;
	char *dest;

	if (!str)
		return (NULL);
	while (str[cant])
		cant++;
	cant++;
	dest = malloc(cant * sizeof(char));
	if (!dest)
		return (NULL);
	for (pos2 = 0; pos2 < cant; pos2++)
	{
		dest[pos2] = str[pos2];
	}
	return (dest);
}
