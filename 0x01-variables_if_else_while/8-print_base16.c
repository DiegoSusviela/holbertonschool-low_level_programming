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
	int w, x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (w = 'a'; w <= 'f'; w++)
		putchar(w);
	putchar('\n');
	return (0);
}
