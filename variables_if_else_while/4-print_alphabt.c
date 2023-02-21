#include <stdio.h>

/**
 * main - print the alphabet except for e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char t, e, q;

	e = 'e';
	q = 'q';

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t != e && t != q)
		{
			putchar(t);
		}
	}
		putchar('\n');

		return (0);
}
