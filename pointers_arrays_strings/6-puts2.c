#include "main.h"

/**
 * puts2 - print every other character
 * @str: input of a string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == '\0')
		{
			i %= 2;
			i = 0
		}
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
