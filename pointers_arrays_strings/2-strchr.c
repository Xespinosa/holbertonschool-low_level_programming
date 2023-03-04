#include "main.h"

/**
 * _strchr - search for a specific character
 * @s: string to be used
 * @c: character to be searched for
 * Return: charcter searched for
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
