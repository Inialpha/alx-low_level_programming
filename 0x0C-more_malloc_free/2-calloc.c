#include "main.h"

/**
 * _calloc - for allocating contigious memory
 * @nmemb: number of element(s)
 * @size: size for each element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}


	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (ptr);
}
