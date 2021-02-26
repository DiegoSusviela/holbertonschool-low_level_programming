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

int main(int argc __attribute__((unused)), char *argv[])
{
	int aux = (atoi(argv[1]) * atoi(argv[2]));

	printf("%d\n", aux);
	return (0);
}
