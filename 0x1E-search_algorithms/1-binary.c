#include "search_algos.h"

void imprimir(int *array, size_t size)
{
	size_t pos = 0;

	printf("Searching in array:");
	while (pos < size)
	{
		printf(" %d", array[pos]);
		if (pos != size - 1)
			printf(",");
		pos++;
	}
	printf("\n");
}

/**
 * linear_search - awopa
 * @array: first ele
 * @size: elem
 * @value: val
 *
 * Return: -1 pa
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1;

	if (!array)
		return (-1);

	imprimir(array + min, max + 1 - min);
	while (min < max)
	{
		if (value > array[(max + min) / 2])
			min = (max + min) / 2;
		if (value < array[(max + min) / 2])
			max = (max + min) / 2;
		if (value == array[(max + min) / 2])
			return ((max + min) / 2);
		imprimir(array + min, max + 1 - min);
	}
	return (-1);
}
