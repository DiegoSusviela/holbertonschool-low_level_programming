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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
