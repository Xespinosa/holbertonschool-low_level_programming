#include "main.h"

/**
 * set_bit - set a bit at an index to 1
 * @n: number
 * @index:index
 * Return: 1 on success or -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
