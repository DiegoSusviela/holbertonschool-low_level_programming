#include "holberton.h"

/**
 * _isupper - Entry point
 * @c: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
