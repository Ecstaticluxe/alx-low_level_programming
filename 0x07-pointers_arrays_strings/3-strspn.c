#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept:m input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}