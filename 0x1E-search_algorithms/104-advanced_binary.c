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
* advanced_binary - Searches for value using a binary search
* @array: Pointer to the first element of array
* @size: Number of elements
* @value: Value to be searched
* Return: Index of value or -1 for NULL
**/
int advanced_binary(int *array, size_t size, int value)
{
    int low = 0;
    int high = size - 1;
    int mid;

    if (array == NULL)
        return (-1);

    while (low <= high) 
    {
        mid = (low + high) / 2;
        printf("Searching in array: ");
        print_array(array + low, high - low + 1);

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return (-1);
}
