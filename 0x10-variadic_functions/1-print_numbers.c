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
unsigned int i;
va_list count;
	va_start(count, n);
for (i = 0; i < n; i++)
{
if (!separator)
	printf("%d", va_arg(count, int));
else if (separator && i == 0)
	printf("%d", va_arg(count, int));
else
	printf("%s%d", separator, va_arg(count, int));
}
va_end(count);
printf("\n");
}
