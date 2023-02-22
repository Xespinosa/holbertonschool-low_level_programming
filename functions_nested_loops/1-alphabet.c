#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the letters
 * Return: void
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
