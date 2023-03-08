#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be used
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}

	return (n);
}
