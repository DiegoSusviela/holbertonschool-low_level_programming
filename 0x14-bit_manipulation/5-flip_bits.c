#include "holberton.h"

/**
 * flip_bits - omaiga
 * @n: wopa
 * @m: ondex
 *
 * Return: the returnas
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference =  n ^ m, checker = 1;
	unsigned int to_flip = 0, iter;

	for (iter = 0; iter < (sizeof(unsigned long int) * 8); iter++)
	{
		if ((checker & difference) == checker)
			to_flip++;
		checker <<= 1;
	}
	return (to_flip);
}
