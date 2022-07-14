#include "main.h"

/**
 *clear_bit - will set the value of a bit to 0 at a given index
 *@n: pointer to number provided by main.c
 *@index: the index starting at 0 of the bit to set
 *Return: 1 for success or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);
	*n = *n & ~(clear << index);
	return (1);
}
