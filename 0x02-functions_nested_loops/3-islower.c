#include <ctype.h>
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int d;

	d = islower(c);
	if (d)
			  return (1);
	else
		return (0);
}
