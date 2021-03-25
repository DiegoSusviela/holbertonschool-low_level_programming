#include "holberton.h"

/**
 * get_endianness - omaiga
 *
 * Return: the returnas
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *to_check = (char *)&i;

	if (*to_check)
		return (1);
	return (0);
}
