#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Entry point
 * @str: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	unsigned int cant = 0, pos2;
	char *dest;

	if (!str)
		return (NULL);
	while (str[cant])
		cant++;
	cant++;
	dest = malloc(cant * sizeof(char));
	if (!dest)
		return (NULL);
	for (pos2 = 0; pos2 < cant; pos2++)
	{
		dest[pos2] = str[pos2];
	}
	return (dest);
}

/**
 * new_dog - Entry point
 * @name: ea
 * @age: aeae
 * @owner: owner
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->age = age;

	dog->name = _strdup(name);
	dog->owner = _strdup(owner);
	if (!dog->name || !dog->owner)
	{
		if (!dog->name)
			free(dog->owner);
		else
			free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
