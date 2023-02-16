#include <stdio.h>

/*
 * print the sizes of all the types
 *
 */
int main(void)
{
	char a;
	int i;
	long int l;
	long long int L;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(L));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
