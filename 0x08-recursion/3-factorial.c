#include "main.h"
/**
 *factorial - will return the factorial of a given number, n
 *@n: int value provided by prompt
 *Return: either -1 or factorial value, depending on case
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
