#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - will execute a function given as a parameter
 *@array: array iof integers
 *@size: size of the array
 *@action: pointer to the function of use
 *Return: hexidecimal outputs or NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (size == 0)
		return;
	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
