#include "main.h"

/**
 * cap_string - capitalize every word
 * @str: string to be evaluated
 * Return: point to the string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		while (!(str[i] >= 'a'; && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == ' ' || str[i - 1] == '\t'|| str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '1' || str[I - 1] == '?' || str[I - 1] == '"' ||
			str[I - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || i == 0)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
