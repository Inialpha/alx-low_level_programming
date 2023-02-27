#include "main.h"


/**
 *rev_string - Reverses a string
 *@s: string to be rev
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	c = a;
	for (b = 0; c > 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
