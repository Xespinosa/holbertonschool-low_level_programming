#include <stdio.h>

/**
 * main - backwards alphabet
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
