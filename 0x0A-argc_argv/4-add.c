#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: wopa
 * @argv: sdkna
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	long aux = 0, suma = 0;
	int i;

	for (i = 1; i < argc; i++)
		if (isdigit(argv[i]) != 0)
		{
			aux = atoi(argv[i]);
			suma = aux + suma;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%ld\n", suma);
	return (0);
}
