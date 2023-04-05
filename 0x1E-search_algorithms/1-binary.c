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
    if (!array)
        return (-1);

    for (size_t i = 0, j = size - 1, mid; i <= j;)
    {
        print_subarray(array, i, j);
        mid = (i + j) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] > value)
            j = mid - 1;
        else if (array[mid] < value)
            i = mid + 1;
    }

    return (-1);
}