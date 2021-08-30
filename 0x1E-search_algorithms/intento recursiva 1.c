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
	int tmp;

	if (!array)
		return (NULL);
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		return (NULL);
	}	
	if (value > array[size / 2])
	{
		tmp = binary_search(*(array + size / 2), size / 2, value);
		if (!tmp)
			return (NULL);
		return (tmp + (size / 2));
	}
	if (value < array[size / 2])
	{
		tmp = binary_search(*(array + size / 2), size / 2, value);
		if (!tmp)
			return (NULL);
		return (binary_search(array, size / 2, value));
	}
	
}
