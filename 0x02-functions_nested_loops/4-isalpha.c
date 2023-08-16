#include "main.h"
/**
  * _isaplha - checking alphabets
  * Return: 1 for alphabets return 0 otherwise
  */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
