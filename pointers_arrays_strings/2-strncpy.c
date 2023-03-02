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
	int j = 0;

	while (src[i++])
	{
		j++;
	}
        for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (dest);
}

