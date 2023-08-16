#include "main.h"
/**
  * print_sign - check if the number is greater, less than or equal to zero
  * @n: the input is an integer
  * Return: 1 is greater than 0 or 0 is zero
  */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
else if (n < 0)
{
_putchar (45);
return (-1);
}
else
{
_putchar (48);
return (0);
}
}
