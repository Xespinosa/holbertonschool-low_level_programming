#include "main.h"

/**
 * prime - recursively divide by a higher number
 * @n: number to check
 * @d: divisor
 * Return: 1 if prime and 0 if not
 */

int prime(int n, int d)
{
	if (n == d)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (prime(n, d + 1));
}

/**
 * is_prime_number - return if prime
 * @n: number to check
 * Return: 1 if true 0 if fales
 */

int is_prime_number(int n)
{
	int d = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, d));
}
