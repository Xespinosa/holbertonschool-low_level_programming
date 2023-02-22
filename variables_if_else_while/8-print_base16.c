#include <stdio.h>

/**
 * main - hex
 * Return: 0
 */

int main(void)
{
	int f;
	char k;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
