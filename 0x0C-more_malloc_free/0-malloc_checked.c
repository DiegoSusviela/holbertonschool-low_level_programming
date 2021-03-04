#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: sdkna
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *dest;

	dest = malloc(b);
	if (!dest)
		exit(98);
	return (dest);
}
