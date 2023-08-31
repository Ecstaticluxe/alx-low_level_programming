#include "main.h"
/**
 * is_prime_number - returns a prime number,
 * @n: of input
 * Return 1
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime_number(n, n - 1));
}
/**
 * @n: input
 * @i: input
 * Return 0
 */
{
if (i == 1)
	return (1);
if (n % i == 0 && i > 0)
	return (0);
return (actual_prime_number(n, i - 1));
}
