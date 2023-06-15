#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, b;
	size_t len, add;
	char *username = argv[1];
	char *char_set = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(username);
	key[0] = char_set[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += username[i];

	key[1] = char_set[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= username[i];

	key[2] = char_set[(b ^ 85) & 63];
	for (b = username[0], i = 0; i < len; i++)
		if ((char)b <= username[i])
			b = username[i];

	srand(b ^ 14);
	key[3] = char_set[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += username[i] * username[i];
	key[4] = char_set[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < username[0]; i++)
		b = rand();
	key[5] = char_set[(b ^ 229) & 63];
	printf("%s\n", key);
	return (0);
}
