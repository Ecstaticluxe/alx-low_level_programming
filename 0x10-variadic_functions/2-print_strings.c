#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings
 * Return: new line
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ptr;
va_start(ptr, n);

	for (i = 0; i < n; i++)
{
	str = va_arg(ptr, char *);
if (!str)
	str = "nil";
if (!separator)
	printf("%s", str);
else if (separator && i == 0)
	printf("%s", str);
else
	printf("%s%s", separator, str);
}
printf("\n");
va_end(ptr);
}
