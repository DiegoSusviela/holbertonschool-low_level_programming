#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Entry point
 * @d: ea
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
