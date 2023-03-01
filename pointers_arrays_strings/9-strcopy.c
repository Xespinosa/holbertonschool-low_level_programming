#include "main.h"

/**
 * _strcopy - copy a string
 * @dest:where to copy to
 * @src: where to copy from
 * Return: how to place the destination
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
