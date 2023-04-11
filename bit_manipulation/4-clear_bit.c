#include "main.h"

/**
 * clear_bit - set bit at index to 0
 * @n: pointer to number
 * @index: index
 * Return: 1 on success or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
