#include "search_algos.h"

/**
 * jump_search - awopa
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
		pos += gap;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pos, pos + gap);
	while (size > pos)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		pos++;
	}
	return (-1);
}
