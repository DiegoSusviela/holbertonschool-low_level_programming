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
	int aux;

	if (argc ==  3)
	{
		aux = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", aux);
		return (0);
	}
	printf("Error\n");
	return (1);
}
