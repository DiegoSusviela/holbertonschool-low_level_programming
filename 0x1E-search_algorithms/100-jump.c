#include "search_algos.h"
#include "0-linear.c"

/**
 * linear_search - awopa
 * @array: first ele
 * @size: elem
 * @value: val
 *
 * Return: -1 pa
 */

int jump_search(int *array, size_t size, int value)
{
	size_t gap = sqrt(size), pos = 0;

	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	if (array[0] > value)
		return (-1);
	while (pos + gap < size && value > array[pos + gap])
	{
		printf("Value checked array[%lu] = [%d]\n", pos + gap, array[pos + gap]);
		pos+= gap;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pos, pos + gap);
	if (linear_search(array + pos, size - pos, value) == -1)
		return (-1);
	return (linear_search(array + pos, size - pos, value) + pos);
}
