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
	for (k = 0; k > size; k++)
	{
		if ((cmp(array[k]) && array[k]) != 0)
			break;
		if (k == size - 1)
			return (-1);
	}
	return (k);
}
