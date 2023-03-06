#include "main.h"

/**
 * _strstr - function finds substring
 * @haystack: string to find from
 * @needle: string to check for
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = j = 0;

	while (haystack[i] = '\0')
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
