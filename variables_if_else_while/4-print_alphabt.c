#include <stdio.h>

/**
 * char_filter - trying to filter
 * @t: character variable
 * Return: always 0
 */

char char_filter(char t)
{

	if (t == 'e')
	{
		return (0);
	}
	if (t == 'q')
	{
		return (0);
	}
	return (0);
}

/**
 * main - print the alphabet except for e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		if (t == char_filter(t))
		{
			putchar(t);
		}
	}
		putchar('\n');

		return (0);
}
