#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatanate two strings
 * @s1: string to be concatanated to
 * @s2: string to be concatanated
 * Return: NULL if fail or pointer if succeed
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *cc;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	len1 = strlen(s1);
	len2 = strlen(s2);

	cc = malloc(len1 + len2 + 1);

	if (cc == NULL)
		return (NULL);

	memcpy(c, s1, len1);
	memcpy(c + len1, s2, len2 + 1);

	return (cc);
}
