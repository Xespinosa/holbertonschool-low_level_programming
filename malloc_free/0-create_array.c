#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create a variable array using malloc
 * @size: variable size of the array
 * @c: character to be placed within the array
 * Return: NULL if failure or pointer if success
 */

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);

	for (; i < size; i++)
		ar[i] = c;

	return (ar);
}
