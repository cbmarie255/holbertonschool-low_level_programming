#include "main.h"
#include <stdlib.h>

/**
 *array_range - will create an array of integers
 *@min: minimum value provided by prompt
 *@max: maximum value provided by prompt
 *Return: null or pointer for malloc
 */
int *array_range(int min, int max)
{
	int *array;
	int k;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min) + 1);
	for (k = min; k < max; k++)
	{
		array[k] = k;
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
