#include "main.h"
/**
 * _realloc - for reallocating memory
 * @ptr: pointer to the previous memory
 * @old_size: size of previous memory
 * @new_size: size of new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int oldsize = old_size;
	unsigned newsize = new_size;
	char *oldp = ptr;
	char *ptr2;
	int i;
	int n = oldsize;

	if (ptr == NULL)
	{
		ptr2 = malloc(newsize);
		return (ptr2);
	}
	else if (newsize == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (newsize == oldsize)
		return (ptr);

	ptr2 = malloc(newsize);
	if (ptr2 == NULL)
		return (NULL);
	
	

	if (oldsize < newsize)
	{
		for (i = 0; i < n; i++)
			ptr2[i] = oldp[i];
	}
	
	free(ptr);
	return (ptr2);
}

