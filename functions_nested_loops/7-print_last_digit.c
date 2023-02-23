#include "main.h"

/**
 * print_last_digit - self explanatory
 * @d: dividend
 * Return: the dividend
 */

int print_last_digit(int d)
{
	int r = d % 10;

	if (d > 0)
	{
	_putchar(r + '0');

	return (r);
	}
	else
	{
		_putchar(-r + '0');
		return (-r);
	}
}
