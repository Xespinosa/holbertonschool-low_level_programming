#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string to be counted
 * Return: total length 
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (s[i]);
}
