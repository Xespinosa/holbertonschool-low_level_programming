#include "main.h"

/**
 * _strcat - concatanate strings
 * @dest: destination string
 * @src: source string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[i] == '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
