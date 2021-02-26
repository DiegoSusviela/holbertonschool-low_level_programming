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
	int aux = (argv[1] * argv[2]) - 48;

	printf("%d\n", aux);
	return (0);
}
