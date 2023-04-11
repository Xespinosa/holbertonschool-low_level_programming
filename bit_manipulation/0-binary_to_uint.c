#include "main.h"

/**
 * binary_to_uint - change a binary number to decimal
 * @b: binary number
 * Return: the changed number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int k = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			k <<= 1;
			k += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (k);
}
