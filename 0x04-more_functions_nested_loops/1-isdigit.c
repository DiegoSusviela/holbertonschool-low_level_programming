#include "holberton.h"

/**
 * _isdigit- Entry point
 * @c: wooopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
