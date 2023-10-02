#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: letters in the file
 *
 * Return: 0 if the file can not be opened or read,
 * NULL, if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *txt;
	ssize_t ld;
	ssize_t w;
	ssize_t t;

	ld = open(filename, O_RDONLY);
	if (ld == -1)
		return (0);

	txt = malloc(sizeof(char) * letters);
	t = read(ld, txt, letters);
	w = write(STDOUT_FILENO, txt, t);

	free(txt);
	close(ld);
	return (w);
}
