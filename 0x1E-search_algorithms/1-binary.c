#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_subarray - prints the subarray between two indexes
 * @array: the array to print
 * @left: start index
 * @right: end index
 */
void print_subarray(int *array, size_t left, size_t right)
{
    size_t start = left;

    printf("Searching in array: ");
    while (start < right)
    {
        printf("%d, ", array[start]);
        start++;
    }
    printf("%d\n", array[start]);
}

/**
 * binary_search - searches for a value in a sorted array of ints using binary
 * @array: array to be searched
 * @size: size of array
 * @value: key to search for
 * Return: index of value of -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_subarray(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
	}

	return (-1);
}