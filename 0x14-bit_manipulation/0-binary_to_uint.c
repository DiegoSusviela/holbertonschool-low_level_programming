#include "holberton.h"

/**
 * binary_to_uint - omaiga
 * @b: wopa
 *
 * Return: the returnas
 */

unsigned int binary_to_uint(const char *b)
{
	int pos = 0;
	unsigned int num = 0;

	if (!b)
		return (0);
	while (b[pos])
	{
		if (b[pos] != '0' && b[pos] != '1')
			return (0);
		num <<= 1;
		if (b[pos] == '1')
			num += 1;
		pos++;
	}
	return (num);
}
