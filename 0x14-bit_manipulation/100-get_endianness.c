#include "main.h"

/**
 * get_endianness - get the endianness of a system
 * Return: int
 */

int get_endianness(void)
{
	int n = 1;
	char *s;

	s = (char *)&n;
	return (*s);
}

