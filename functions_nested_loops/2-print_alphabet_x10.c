#include "main.h"

/**
 * print_alphabet_x10 - 10 alphabets
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char k;

	while (x <= 9)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		x++;
	}
}
