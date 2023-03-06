#include "main.h"

/**
 * _puts_recursion - recursively prints a string
 * @s: string to be used
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
