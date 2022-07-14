#include "main.h"

/**
 *set_bit - will set the value of a bit to 1 at a given index
 *@n: pointer to number provided in main.c
 *@index: the index starting at 0 of the bit to set
 *Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set = 1;
	unsigned int bit = sizeof(n) * 8 - 1;

	if (index > bit)
		return (-1);

	set = set << index;
	*n = *n | set;
	return (1);
}
