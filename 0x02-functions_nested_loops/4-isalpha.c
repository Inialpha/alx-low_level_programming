#include "main.h"

/**
 * _isalpha - checks for alphabets
 * Return: 1 and 0
 *@c: char to check
 */

int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
