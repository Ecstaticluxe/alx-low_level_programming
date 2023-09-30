#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal;

if (!b)
return (0);

for (i = 0; b[i]; i++)

{
if (b[i] < '0' || b[i] > '1')
return (0);
decimal = 2 * decimal + (b[i] - '0');

}

return (decimal);
}
