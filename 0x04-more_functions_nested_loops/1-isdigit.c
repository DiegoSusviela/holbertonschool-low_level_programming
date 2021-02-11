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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
