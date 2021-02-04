#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w,x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		w = tolower(x);
		putchar(w);
	}
	return (0);
}
