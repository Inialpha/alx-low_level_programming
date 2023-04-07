#include <stdio.h>

int main(void)
{
	unsigned long int r = 1;
	unsigned long int c = 0;
	unsigned long int d = 1024;
	c = d ^ 1;
	for (int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		printf("c = %ld\n", c);
		printf("r = %ld\n", r);
		printf("c & r = %ld\n", c & r);
		r <<= 1;
	}
	
}
