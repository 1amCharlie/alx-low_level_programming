#include "main.h"

/**
 * is_prime - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: inputnumber
 * @c: iterator
 * Return: 1 for a prime number. 0 for a non prime number
 */
int is_prime(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_prime(n, 2));
}
