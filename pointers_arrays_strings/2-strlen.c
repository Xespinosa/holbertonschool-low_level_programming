#include "main.h"

/**
 * _strlen - returns length of a string
 * @str: string to be evaluated
 * Return: the total length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
