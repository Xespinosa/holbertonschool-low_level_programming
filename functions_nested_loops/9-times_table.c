#include "main.h"

/**
 * times_table - print the table of 9
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
		z = x * y;
		_putchar(z + '0');
	}
	}
	_putchar('\n');
}
