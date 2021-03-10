#include "function_pointers.h"

/**
 * array_iterator - prints name
 * @array: array of elements
 * @size: size of array
 * @action: function of action
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
