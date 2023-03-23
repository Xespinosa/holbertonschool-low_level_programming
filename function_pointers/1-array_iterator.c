#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - parameter on each element
 * @array: array being evaluated
 * @size: size of the array
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
