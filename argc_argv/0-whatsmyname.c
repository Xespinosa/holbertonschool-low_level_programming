#include <stdio.h>

/**
 * main - entry point
 * @argv: string to be passed
 * *argc: string total length
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
