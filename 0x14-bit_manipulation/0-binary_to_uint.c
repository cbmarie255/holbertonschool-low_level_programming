#include "main.h"

/**
 *binary_to_unit - will convery a binary number to an unsigned int
 *@b: a pointer to a string of 0 & 1 characters
 *Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	if (b[i + 1])
	{
		if (b[i + 1] != '1' && b[i + 1] != '0')
			return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		uint <<= 1;
		uint += b[i] - '0';
		i++;
	}
	return (uint);
}
