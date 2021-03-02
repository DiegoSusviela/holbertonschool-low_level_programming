#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: wopa
 * @height: ea
 *
 * Description: Show aux message blablabla
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int pos_alt, pos_anch;
	int **aux;

	if (width <= 0 || height <= 0)
		return (NULL);
	aux = (int **)malloc(sizeof(int *) * height);
	if (!aux)
		return (NULL);
	for (pos_alt = 0; pos_alt < height; pos_alt++)
	{
		aux[pos_alt] = (int *)malloc(sizeof(int) * width);
		if (!aux[pos_alt])
		{
			for (pos_anch = 0; pos_anch < pos_alt; pos_anch++)
				free(aux[pos_anch]);
			free(aux);
			return (NULL);
		}
		for (pos_anch = 0; pos_anch < width; pos_anch++)
			aux[pos_alt][pos_anch] = 0;
	}
	return (aux);
}
