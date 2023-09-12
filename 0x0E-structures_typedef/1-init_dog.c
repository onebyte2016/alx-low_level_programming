#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function initialize dog
 * @d: pointer to struct dog
 * @name: parameter
 * @age: second parameter
 * @owner: third parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
