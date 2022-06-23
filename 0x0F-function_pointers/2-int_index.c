#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - will search for an integer
 *@array: array provided by main.c
 *@size: number f elements in the array 'array'
 *@cmp: function pointer
 *Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
		return (-1);
	if (cmp  == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (k);
}
