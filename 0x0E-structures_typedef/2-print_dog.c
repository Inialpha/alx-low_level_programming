#include "dog.h"
#include <stdio.h>

/**
 * print_dog - for printing proparties of dog
 * @d: dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.6f\n", d->age);


		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Name: %s\n", d->owner);

	}

}
