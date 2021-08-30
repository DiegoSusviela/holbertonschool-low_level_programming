#include "search_algos.h"

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
	int min = 0, max = size - 1;

	if (!array)
		return (NULL);

	while (min < max)
	{
		if (value > array[((max - min) / 2) + min])
			min = ((max - min) / 2) + min;
		if (value < array[((max - min) / 2) + min])
			max = ((max - min) / 2) + min;
		if (value == array[((max - min) / 2) + min])
			return (((max - min) / 2) + min);
	}
	return (NULL);
}
