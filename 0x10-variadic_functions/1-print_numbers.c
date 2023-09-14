#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: Number of integers
 * Return: new line
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, arr;
va_list count;
	va_start(count, n);
for (i = 0; i < n; i++)
{
	arr = va_arg(count, const unsigned int);
		printf("%d", arr);
	if (i != (n - 1) && separator)
	(!= NULL);
			printf("%s", separator);
}
printf("\n");
va_end(count);
}


