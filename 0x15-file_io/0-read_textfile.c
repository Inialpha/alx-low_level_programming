#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read the content of a text file
 * @filename: file name to read from
 * @letters: the number of letters to print out
 * Return: number ovlf letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t openfile, readfile, writeletters;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	openfile = open(filename, O_RDONLY);
	readfile = read(openfile, buffer, letters);
	writeletters = write(STDOUT_FILENO, buffer, readfile);
	if (openfile == -1 || readfile == -1 || writeletters == -1 || writeletters != readfile)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(openfile);
	return (writeletters);
}
