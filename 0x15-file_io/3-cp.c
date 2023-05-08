#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Etry point
 * @argc: argument count
 * @argv: argumants
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int open_from, open_to, cf, ct;
	ssize_t rd, wrt;
	char *buffer[1024];
	mode_t perm;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	       exit(97);
	}

	open_from = open(argv[1], O_RDONLY);
	if (open_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file%s\n", argv[1]);
		exit(98);
	}
	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	open_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);

	if (open_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	rd = 1024;

	while (rd == 1024)
	{
		rd = read(open_from, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}

		wrt = write(open_to, buffer, wrt);
		if (wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error can't write to %s\n", argv[2]);
			if (open_from == -1)
				close(open_from);
			if (open_to == -1)
				close(open_to);
			exit(99);
		}
	}

	cf = close(open_from);
	ct = close(open_to);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_from);
		exit(100);
	}

	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_to);
		exit(100);
	}

	return (0);
}
