#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - for creating a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dogs owner
 * Return: dog properties
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, o, i, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;

	for (o = 0; owner[o]; o++)
		;
	o++;
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	for (a = 0; a < o; a++)
		dog->owner[a] = owner[a];
	return(dog);
}
