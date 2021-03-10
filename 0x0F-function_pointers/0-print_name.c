#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: function that prints
 *
 * Description: Show dest message blablabla
 * Return: no return in void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
