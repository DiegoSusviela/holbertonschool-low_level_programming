#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: sdkna
 * @old_size: ea
 * @new_size: aeae
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest;
	unsigned int contador, max_size = new_size;
	char *old_ptr = ptr;

	if (!ptr)
	{
		dest = malloc(new_size);
		return (dest);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	dest = malloc(new_size);
	if (!dest)
		return (NULL);
	if (new_size > old_size)
		max_size = old_size;
	for (contador = 0; contador < max_size; contador++)
		dest[contador] = old_ptr[contador];
	free(ptr);
	return (dest);
}
