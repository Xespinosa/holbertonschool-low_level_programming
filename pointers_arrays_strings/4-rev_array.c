#include "main.h"

/**
 * reverse_array - swap the positions of the values in an array by half
 * @a: array to be used
 * @n: total length of the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}	
