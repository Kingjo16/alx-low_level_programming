#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct dog variable will be initialized
 * @d: A pointer
 * @name: A name
 * @age: An age
 * @owner: An owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
