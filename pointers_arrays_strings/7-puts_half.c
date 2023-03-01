#include "main.h"

/**
 * puts_half - print only the second half of the string
 * @str: string to be reprinted
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = len / 2; str[i] != '\0'; i++)
	{
		if (str[len] == '\n')
		{
			break;
		}
		else
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
