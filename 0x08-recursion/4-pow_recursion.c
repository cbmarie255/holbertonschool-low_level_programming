#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to y
 *@x: integer provided by prompt
 *@y: power to be raised by
 *Return: either -1, 1, 0, or value of x to y power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
