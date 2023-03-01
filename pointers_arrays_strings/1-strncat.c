#include "main.h"

/**
 * _strncat - concatanates n bytes of two strings
 * @dest: destination string
 * @src: source string
 * @n: how many times to move
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	while (dest_len != '\0')
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
