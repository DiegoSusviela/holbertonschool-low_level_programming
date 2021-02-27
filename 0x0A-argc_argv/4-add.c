#include <stdio.h>
#include <stdlib.h>

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
		if (*argv[i] != 0 && atoi(argv[i]) > 0)
		{
			aux = atoi(argv[i]);
			suma = aux + suma;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	printf("%u\n", suma);
	return (0);
}
