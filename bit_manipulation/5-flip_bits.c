#include "main.h"

/**
 * flip_bits - count how many times you flip
 * @n: first number
 * @m: second number
 * Return: the amount of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k = 0;

	while (n > 0 || m > 0)
	{
		int tmp1 = (n & 1);
		int tmp2 = (m & 2);

		if (tmp1 != tmp2)
			k++;

		n >>= 1;
		m >>= 1;
	}
	return (k);
}
