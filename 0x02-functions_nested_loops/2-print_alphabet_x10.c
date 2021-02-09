#include "holberton.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
		print_alphabet();
}
