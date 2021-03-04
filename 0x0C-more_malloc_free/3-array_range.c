#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: sdkna
 * @max: ea
 *
 * Description: Show dest message blablabla
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int pos, gap;
	int *dest;

	if (min > max)
		return (NULL);
	gap = max - min + 1;
	dest = malloc(sizeof(int) * gap);
	if (!dest)
		return (NULL);
	for (pos = 0; pos < gap; pos++, min++)
		dest[pos] = min;
	return (dest);
}
