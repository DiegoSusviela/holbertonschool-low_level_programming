#include "holberton.h"

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, n = 612852475143;
	for (a = 2; a < 782848; a++)
		if (n % a == 0)
			n = n / a;
	printf("%ld\n", a);
	return (0);
}
