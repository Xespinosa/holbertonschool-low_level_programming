 #include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @str: string to be used
 * Return: a pointer to the changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
	}

	return (str);
}
