#include "main.h"

/**
 * _islower - check if lowercase
 * @c: placeholder
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
