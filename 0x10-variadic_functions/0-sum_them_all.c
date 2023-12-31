#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number to be added
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list count;

	va_start(count, n);
	for (i = 0; i < n; i++)

	sum += va_arg(count, int);

	va_end(count);
	return (sum);
}
