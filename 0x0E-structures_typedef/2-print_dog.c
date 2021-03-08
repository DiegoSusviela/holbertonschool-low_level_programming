#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 * @d: sdkna
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)\n");
		/*if (d->age)*/
			printf("Age: %.6f\n", d->age);
		/*
		*else
		*	printf("Age: (nill)");
		**/
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
