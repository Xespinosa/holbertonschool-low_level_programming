#include "main.h"

/**
 * find_root - find the square root of a number
 * @k: number to arbitrarily test against n
 * @n: number for which to find the square root
 * Return: return the square root of a number
 */

int find_root(int k, int n)
{
	if ( k * k > n)
	{
		return (-1);
	}
	if (k * k == n)
	{
		return (r);
	}

	return (find_root(n, k + 1);
}

/**
 * _sqrt_recursion - find square root 
 * @n: number to find the square root for
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_root(n, 0);
}
