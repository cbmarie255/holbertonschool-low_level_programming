#include "holberton.h"
/**
 *reverse_array - will reverse the content of an array
 *@a: reprents an array of integers
 *@n: the number of elements to swap
 *Return: always null for success
 */
void reverse_array(int *a, int n)
{
int k;
int temp;

for (k = 0; k < (n / 2); k++)
{
temp = a[k];
a[k] = a[n - k - 1];
a[n - k - 1] = temp;
}
}
