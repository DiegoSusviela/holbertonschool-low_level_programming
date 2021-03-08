#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * @d: sdkna
 * @name: ea
 * @age: aeae
 * @owner: owner
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
		printf("Age: %.6f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}