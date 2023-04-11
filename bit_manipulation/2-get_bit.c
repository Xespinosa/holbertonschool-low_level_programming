#include "main.h"

/**
 * get_bit - return bit at index
 * @n: number to evaluate
 * @index: index to find
 * Return: binary number
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int k = 0;

	if (index > 63)
		return (-1);
	k = ((n >> index) & 1);

	return (k);
}
