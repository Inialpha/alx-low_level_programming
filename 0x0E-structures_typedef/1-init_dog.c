#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the variable
 * @name: name of the variable
 * @age: age of variable
 * @owner: variable.owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


