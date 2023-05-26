#include "search_algos.h"

/**
 * binary_search - search through an array using the binary algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index where value is found on SUCCESS or -1 on FAILURE
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, mid, end = size - 1, i;
	/* check array is not NULL*/
	if (array == NULL)
		return (-1);
	/* loop through the array*/
	while (first <= end)
	{
		mid = (first + end) / 2;
		/* print the first part of the text*/
		printf("Searching in array: ");
		/* print the values within the array except the last one*/
		for (i = first; i <= (end - 1); i++)
		{
			printf("%d, ", array[i]);
		}
		/* print the last value and the new line*/
		printf("%d\n", array[i]);
		/* decrease the size by half to the left*/
		if (array[mid] < value)
		{
			first = mid + 1;
			mid = mid / 2;
		}
		/* decrease the size by half to the right*/
		else if (array[mid] > value)
		{
			end = mid - 1;
			mid = end - mid;
		}
		else
		{
			return (mid);
		}
	} /* exit the loop once you can no longer decrease the size of the array*/
	/* check if where you are is equal to value*/
	/* otherwise return failure*/
		return (-1);
}
