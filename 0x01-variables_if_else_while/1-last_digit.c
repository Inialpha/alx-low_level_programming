#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int lastdigit
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	}

	else if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}

	else if (lastdigit < 6 && != 0)
	{
		printf("Last digit of %d is %d and \nis less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}