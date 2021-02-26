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
	int i, aux, suma = 0;

	for(i = 1; i < argc; i++)
		if (*argv[i]) >= '0' && *argv[i] <= '9')
		{
			aux = atoi(argv[i]);
			suma = aux + suma;
		}
		else
		{
			printf("Error\n");
			return(1);
		}
		printf("%d\n", suma);
		return (0);
}
