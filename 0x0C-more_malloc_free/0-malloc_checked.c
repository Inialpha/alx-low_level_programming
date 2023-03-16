#include "main.h"

/**
 * malloc_checked - funtion for allocating memory
 * @b: size of memory
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
