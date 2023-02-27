#include "main.h"

/**
 * swap_int - switch the integers of 2 variables
 * @a:first input
 * @b:second input
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
