#include "main.h"

/**
 * _pow_recursion - raise a number to the power of another number
 * @x: number to be multiplied
 * @y: amount of times to be multiplied by
 * Return: the result of the equation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
