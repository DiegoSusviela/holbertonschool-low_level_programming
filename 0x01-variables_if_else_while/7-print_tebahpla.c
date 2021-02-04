#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
