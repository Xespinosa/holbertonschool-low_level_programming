#include "main.h"

/**
 * _print_rev_recursion - as advertised
 * @s: string to be used
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return; 
}  
