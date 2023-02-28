#include "main.h"

/**
 * rev_string - reverse a string without printing it
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int temp;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
