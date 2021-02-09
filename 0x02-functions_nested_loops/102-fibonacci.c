#include "holberton.h"

/**
 * main - imprime
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main() {
	int i, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}

	return (0);
}
