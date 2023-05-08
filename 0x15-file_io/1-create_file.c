#include "main.h"

/**
 * create_file - creat a file
 * @filename: the file to be created
 * @text_content: content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int openfile, wrt;
	int i;

	if (text_content == NULL)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(openfile, text_content, i);

	if (openfile == -1 || wrt == -1)
		return (-1);

	close(openfile);
	return (1);
}
