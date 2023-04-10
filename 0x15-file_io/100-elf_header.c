#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/stst.h>

void close_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: can't read file %s\n", file);
	exit (98);
}

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file %s\n", elf);
		exit (98);
	}
}

/**
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr *head;
	int open_file, read_file;

	(void)argc;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
		close_file(argv[1]);
	

	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(open_file);
		close_file(argv[1]);
	}

	read_file = read(open_file, header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(head);
		close(open_file);
		dprintf(STDERR_FILENO, "Error %s: No such file", argv[1]);
		exit (98);
	}
