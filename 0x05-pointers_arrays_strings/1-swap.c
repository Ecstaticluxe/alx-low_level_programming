#include "main.h"

 /**
 * swap_int - takes two variables and integers and swaps them.
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
