#include "holberton.h"
/**
 *reverse_array - will reverse the content of an array
 *@a: reprents an array of integers
 *@n: the number of elements to swap
 *Return: always null for success
 */
void reverse_array(int *a, int n)
{
int temp;
int length = 0;
int i = 0;
n = length - 1;

while (a[length] != '\0')
{
length++;
}
while (i < n)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
