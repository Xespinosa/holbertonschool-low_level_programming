#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - suplicate the contents of a string
 * *str: the string to be duplicated
 * Return: NULL on failure or pointer to the string on success
 */

char *_strdup(char *str)
{
	int i = 0;
	int len;
	int *dup;

	if (str == NULL)
		return (NULL);

	if (dup == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len);

	for (; i <= len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
