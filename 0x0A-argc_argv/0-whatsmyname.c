#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: array of argument
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;


	printf("%s\n", argv[0]);
	return (0);
}
