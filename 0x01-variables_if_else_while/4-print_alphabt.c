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

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x != Q && x != E)
		w = tolower(x);
		putchar(w);
	}
	putchar('\n');
	return (0);
}
