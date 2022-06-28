#include "variadic_functions.h"

/**
 *sum_them_all - will find the sum of all its parameters
 *@n: number fed through main.c
 *Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pointer;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pointer, int);
	}
	va_end(pointer);
	return (sum);
}
