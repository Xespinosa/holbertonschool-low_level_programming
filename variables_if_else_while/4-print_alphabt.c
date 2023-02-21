#include <stdio.h>

/**
 * main - print the alphabet except for e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char t;

for (t = 'a'; t <= 'z'; t++)
{
	putchar(t);

	if ((t == 'e') & (t == 'q'))
	{
		break;
	}
}

	putchar('\n');

	return (0);
}
