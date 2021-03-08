#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for unsigned int
 */


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
