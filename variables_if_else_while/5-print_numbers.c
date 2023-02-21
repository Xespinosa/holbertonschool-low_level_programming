#include <stdio.h>

/**
 * main - print numbers
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = '0' + '0'; n <= '0' + '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
