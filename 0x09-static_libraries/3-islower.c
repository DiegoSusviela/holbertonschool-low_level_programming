#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _islower - Entry point
 * @c: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
