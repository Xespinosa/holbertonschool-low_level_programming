#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: arguments
 * Return: 0 success or 1 failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");

				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	printf("0\n");

	return (0);
}
