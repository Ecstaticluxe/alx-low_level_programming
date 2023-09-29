#include <stdio.h>
#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be printed
 * Return: 0
 */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
	{
	current = n >> i;

	if (current & 1)
		{
		putchar('1');
		count++;
		}
else if (count)
	putchar('0');
	}
if (!count)
	putchar('0');
}
