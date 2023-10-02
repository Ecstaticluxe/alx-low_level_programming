#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * create_file - a function that creates a file
 * @filename: nam eof the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int ld, w, len = 0;

if (filename == NULL)
	return (-1);
{
	if (text_content != NULL)

	{
		for (len = 0; text_content[len];)
			len++;
	}
}
ld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(ld, text_content, len);

if (ld == -1 || w == -1)
	return (-1);
close(ld);
	return (1);
}
