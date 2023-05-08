#include "main.h"

/**
 * append_text_to_file - append text to the end of file
 * @filename: file to append to
 * @text_content: to be appended to a file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opf, wrt, i;

	if (filename == NULL)
		return (-1);

	opf = open(filename, O_WRONLY | O_APPEND);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content != NULL)
		wrt = write(opf, text_content, i);
	close(opf);

	if (wrt == -1)
		return (-1);

	return (1);
}
