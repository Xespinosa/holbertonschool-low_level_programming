#include "main.h"

/**
 * _puts - wwites what is in a string
 * @str: string to be inputed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
