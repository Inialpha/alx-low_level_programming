#include "main.h"

/**
 * _calloc - for allocating contigious memory
 * @nmemb: number of element(s)
 * @size: size for each element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * sizeof(size));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

