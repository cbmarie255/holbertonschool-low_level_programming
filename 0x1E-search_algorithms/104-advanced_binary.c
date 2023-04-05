#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of ints
 * @array: The array to be printed
 * @size: Number of elements in @array
 * Return: printed array
 */
void print_array(const int *array, size_t size)
{
    size_t i = 0;

    if (!array)
        return;

    for (i = 0; i < size; i++)
    {
        if (i > 0)
        printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value in the array, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    int mid = (size - 1) / 2;

    printf("Searching in array: ");
    print_array(array, size);

    if (array[mid] == value)
        return (mid);

    if (array[mid] < value)
    {
        int index = advanced_binary(array + mid + 1, size - mid - 1, value);
        return (index == -1 ? -1 : mid + 1 + index);
    }
    else
        return advanced_binary(array, mid + 1, value);

    return (-1);
}
