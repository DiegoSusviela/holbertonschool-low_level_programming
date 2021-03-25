#include "holberton.h"

/**
 * get_bit - omaiga
 * @n: wopa
 * @index: ondex
 *
 * Return: the returnas
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
