#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, decimal;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	decimal = (n % 10);
	if (decimal > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, decimal);
	else
		if (decimal == 0)
			printf("Last digit of %d is %d and is 0\n", n, decimal);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, decimal);
	return (0);
}
