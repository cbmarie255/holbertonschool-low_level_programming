#include "main.h"

/**
 *get_bit - will get a value of a bit at a given index
 *@n: number passed in by main.c
 *@index: index starting at 0 of the bit to fetch
 *Return: value of the bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8 - 1;

	return (((1 << bit) - 1) & (n >> (index - 1)));
}
