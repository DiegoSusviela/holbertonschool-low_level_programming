#include "search_algos.h"

/**
 * interpolation_search - awopa
 * @array: first ele
 * @size: elem
 * @value: val
 *
 * Return: -1 pa
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos, high = size - 1;

	if (!array)
		return (-1);
	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else 
			if (array[pos] > value)
				high = pos - 1;
		else
			return (pos);
	}
	return (0);
}
