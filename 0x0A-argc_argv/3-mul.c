#include<stdio.h>

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
	int aux = ((argv[1] - '0') * (argv[2]) - '0');

	printf("%d\n", aux);
	return (0);
}
