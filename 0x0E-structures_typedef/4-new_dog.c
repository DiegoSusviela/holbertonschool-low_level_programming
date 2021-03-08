#include <stdio.h>
#include "dog.h"

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
	char name_copy, owner_copy;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	/*name_copy = name;
	*owner_copy = owner;
	**/
	dog->age = age;
	/*
	*dog->name = malloc(name_copy * (sizeof(char)));
	*dog->owner = malloc(owner_copy * (sizeof(char)));
	**/
	dog->name = _strdup(name);
	dog->owner = _strdup(owner);
	return (dog);

	
	
}