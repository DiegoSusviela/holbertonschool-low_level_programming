#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: wopa
 * @height: ea
 *
 * Description: Show aux message blablabla
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int pos1 = 0;

	if (!grid || height <= 0)
		return;
	while (pos1 < height)
	{
		free(grid[pos1]);
		pos1++;
	}
	free(grid);
}
