#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count of argv
 * @argv: arguments being passed
 * Return: 0 if success or 1 if failure
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
