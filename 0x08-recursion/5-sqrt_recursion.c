#include "main.h"
/**
 *prereq - will find the squareroot of a natural int
 *@f: number squared
 *@k: output of f squared
 *Return: -1, 0
 */
int prereq(int k, int f)
{
if (f * f > k)
	{
	return (-1);
	}
else if (f * f == k)
	{
	return (f);
	}
else
	{
	return (prereq(k, f + 1));
	}
return (1);
}

/**
 *_sqrt_recursion - will find the squareroot of a natural int
 *@n: number provided by prompt
 *Return: -1, 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
	return (0);
	}
	return (prereq(n, 1));
}
