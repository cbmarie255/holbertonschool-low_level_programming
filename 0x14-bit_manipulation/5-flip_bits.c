#include "main.h"

/**
 *flip_bits - will return the number of bits needed to flip
 *@n: first number
 *@m: second number passed in through main.c
 *Return: number flipped (not in binary form)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int count = 0;

	if (m == '\0' || n == '\0')
		return (0);
	while (xor != '\0')
	{
		if (xor & 1)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
