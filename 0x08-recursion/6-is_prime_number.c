#include "main.h"
/**
 *if_true - will test the n string to identify prime number
 *@k: reference for point in the string
 *@n: provided by prompt
 *Return: 0 or 1
 */
int if_true(int k, int n)
{
	if (k == n)
	{
		return (1);
	}
	else if (n % k == 0)
	{
		return (0);
	}
	else
		return (if_true(k + 1, n));
}
/**
 *is_prime_number - will test the n string to return respective output
 *@n: provided by prompt
 *Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (0);
	}
	return (if_true(n, 2));
}
