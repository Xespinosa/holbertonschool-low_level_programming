#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n quantty of the content of an array
 * @a: array tp be evaluated
 * @n:how many characters to print from the array
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
