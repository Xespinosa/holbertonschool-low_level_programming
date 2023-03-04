#include "main.h"

/**
 * _memcpy - copies in a specific memory are
 * @dest: destination string
 * @src: source string
 * @n: total length
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest)
}
