#include <stdlib.h>

/**
 * malloc_checked - verify that malloc functions correcctly
 * @b: size that malloc will allocate
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);

	return (ptr);
}
