#include "main.h"

/**
 * print_line - makes a whole line
 * @n: comparison
 */

void print_line(int n)
{
	int x;

	if (x == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
