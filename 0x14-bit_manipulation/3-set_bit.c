#include "holberton.h"

/**
 * get_bit - omaiga
 * @n: wopa
 * @index: ondex
 *
 * Return: the returnas
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
