#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: number to be factored
 * Return: the factorial of the number given
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
