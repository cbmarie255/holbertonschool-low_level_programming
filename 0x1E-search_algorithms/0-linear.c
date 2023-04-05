#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * linear_search - find a specific value in an array using linear search
 * @array: pointer to first element
 * @size: number of elements
 * @value: searching value 
 *
 * Return: 1st index where value is located or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
