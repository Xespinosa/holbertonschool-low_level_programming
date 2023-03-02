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
	int i = 0;
	int j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[i] == '\0')
	{
		if (j < i && j < n)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		else
		{
			break;
		}
	}
	dest[i] = '\0';
	
	return (dest);
}
