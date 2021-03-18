
#ifndef AUX
#define AUX

#include "lists.h"
#include "lists.h"

/**
 * _strlen - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strlen(const char *s)
{
	int marker = 0;

	while (*(s + marker))
		marker++;
	return (marker);
}

#endif
