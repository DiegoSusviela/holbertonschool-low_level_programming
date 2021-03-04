#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: sdkna
 * @size: ea
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int pos;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	for (pos = 0; pos < (nmemb * size); pos++)
		arr[pos] = 0;
	return (arr);
}
