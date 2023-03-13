#include <stdio.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument strings
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != argv[argc])
	{
		i++;
	}
	if (argv[i] == argv[argc])
	{
		printf("%d\n", (i - 1));
	}

	return (0);
}
