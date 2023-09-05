 #include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: sixe of unsigned int
 * @c: character
 * Return: NULL if 0, pointer if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
	return (NULL);

		for (i = 0; i < size; i++)
			str[i] = c;
				return (str);
}
