#include "main.h"

/**
 * _strncpy - copy n characters of a string
 * @dest:where to copy to
 * @src: where to copy from
 * @n: how many characters to read
 * Return: how to place the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}