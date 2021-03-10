#include "function_pointers.h"

/**
 * array_iterator - prints name
 * @array: array of elements
 * @size: size of array
 * @cmp: function of action
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int finder, found;

	if (size > 0 && array && cmp)
	{
		for (finder = 0; finder < size; finder++)
		{
			found = cmp(array[finder]);
			if (found)
				break;
		}
		if (finder < size)
			return (finder);
	}
	return (-1);
}
