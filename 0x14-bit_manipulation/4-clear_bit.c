#include "holberton.h"

/**
 * clear_bit - omaiga
 * @n: wopa
 * @index: ondex
 *
 * Return: the returnas
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
