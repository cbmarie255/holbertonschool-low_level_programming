#include "main.h"

/**
 *print_binary - will print the binary representation of a number
 *@n: int passed in through main.c to convert to binary
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int bit;
	int count = 0;

	if (n == 0)
		_putchar('0');
	for (bit = sizeof(n) * 8 - 1; bit >= 0; bit--)
	{
		if (n >> bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

}
