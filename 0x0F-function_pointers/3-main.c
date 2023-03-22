#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if( argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int result;
	int (*operation)(int, int);

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	result =operation(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

}
