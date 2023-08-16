#include "main.h"
/**
  * _islower - checking for lower character
  * @c - character
  * Return: 1 for lowercase. return 0 otherwise
  */

int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
